//*********************************************************
//    Copyright (c) Microsoft. All rights reserved.
//
//    Apache 2.0 License
//
//    You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
//    implied. See the License for the specific language governing
//    permissions and limitations under the License.
//
//*********************************************************

#pragma once

//#include <../packages/OpenXR.Headers.1.0.10.2/include/openxr/openxr.h>
#include <openxr/openxr.h>
#include "QRHandle.h"

namespace sample {
    struct Cube {
        xr::SpaceHandle Space{};
        std::optional<XrPosef> PoseInSpace{}; // Relative pose in cube Space. Default to identity.
        XrVector3f position{ 0.0f, 0.0f, 0.0f };
        XrQuaternionf orientation{ 0.0f, 0.0f, 0.0f };
        XrVector3f Scale{0.1f, 0.1f, 0.1f};
        XrPosef PoseInAppSpace = xr::math::Pose::Identity(); // Cube pose in app space that gets updated every frame
    
        std::string text;
    };

    struct Light
    {
        xr::SpaceHandle Space{}; // refers to position
    };

    struct Quad {
        xr::SpaceHandle Space{};
        std::optional<XrPosef> PoseInSpace{};
        XrVector3f Scale{ 0.1f, 0.1f, 0.1f };

        XrPosef PoseInAppSpace = xr::math::Pose::Identity();
    };

    struct IOpenXrProgram {
        virtual ~IOpenXrProgram() = default;
        virtual void Run() = 0;
    };

    struct IGraphicsPluginD3D11 {
        virtual ~IGraphicsPluginD3D11() = default;

        // Create an instance of this graphics api for the provided instance and systemId.
        virtual ID3D11Device* InitializeDevice(LUID adapterLuid, const std::vector<D3D_FEATURE_LEVEL>& featureLevels) = 0;

        // List of color pixel formats supported by this app.
        virtual const std::vector<DXGI_FORMAT>& SupportedColorFormats() const = 0;
        virtual const std::vector<DXGI_FORMAT>& SupportedDepthFormats() const = 0;

        // Render to swapchain images using stereo image array
        virtual void RenderView(const XrRect2Di& imageRect,
                                const float renderTargetClearColor[4],
                                const std::vector<xr::math::ViewProjection>& viewProjections,
                                DXGI_FORMAT colorSwapchainFormat,
                                ID3D11Texture2D* colorTexture,
                                DXGI_FORMAT depthSwapchainFormat,
                                ID3D11Texture2D* depthTexture,
                                const std::vector<const sample::Cube*>& cubes,
                                const std::vector<const sample::Cube*>& quads,
                                const sample::Cube& light,
			                    const std::vector<const sample::Cube*>& space_origins,
                                bool should_render_next_hologram,
                                bool should_render_model,
                                XrVector3f right_hand_position) = 0;

      };

    std::unique_ptr<IGraphicsPluginD3D11> CreateCubeGraphics();
    std::unique_ptr<IOpenXrProgram> CreateOpenXrProgram(std::string applicationName, std::unique_ptr<IGraphicsPluginD3D11> graphicsPlugin);

} // namespace sample

