/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/gles2.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLAD_GLES_ES_VERSION_2_0 = 0;
int GLAD_GLES_ES_VERSION_3_0 = 0;
int GLAD_GLES_ES_VERSION_3_1 = 0;
int GLAD_GLES_ES_VERSION_3_2 = 0;
int GLAD_GLES_AMD_compressed_3DC_texture = 0;
int GLAD_GLES_AMD_compressed_ATC_texture = 0;
int GLAD_GLES_AMD_framebuffer_multisample_advanced = 0;
int GLAD_GLES_AMD_performance_monitor = 0;
int GLAD_GLES_AMD_program_binary_Z400 = 0;
int GLAD_GLES_ANDROID_extension_pack_es31a = 0;
int GLAD_GLES_ANGLE_depth_texture = 0;
int GLAD_GLES_ANGLE_framebuffer_blit = 0;
int GLAD_GLES_ANGLE_framebuffer_multisample = 0;
int GLAD_GLES_ANGLE_instanced_arrays = 0;
int GLAD_GLES_ANGLE_pack_reverse_row_order = 0;
int GLAD_GLES_ANGLE_program_binary = 0;
int GLAD_GLES_ANGLE_texture_compression_dxt3 = 0;
int GLAD_GLES_ANGLE_texture_compression_dxt5 = 0;
int GLAD_GLES_ANGLE_texture_usage = 0;
int GLAD_GLES_ANGLE_translated_shader_source = 0;
int GLAD_GLES_APPLE_clip_distance = 0;
int GLAD_GLES_APPLE_color_buffer_packed_float = 0;
int GLAD_GLES_APPLE_copy_texture_levels = 0;
int GLAD_GLES_APPLE_framebuffer_multisample = 0;
int GLAD_GLES_APPLE_rgb_422 = 0;
int GLAD_GLES_APPLE_sync = 0;
int GLAD_GLES_APPLE_texture_format_BGRA8888 = 0;
int GLAD_GLES_APPLE_texture_max_level = 0;
int GLAD_GLES_APPLE_texture_packed_float = 0;
int GLAD_GLES_ARM_mali_program_binary = 0;
int GLAD_GLES_ARM_mali_shader_binary = 0;
int GLAD_GLES_ARM_rgba8 = 0;
int GLAD_GLES_ARM_shader_framebuffer_fetch = 0;
int GLAD_GLES_ARM_shader_framebuffer_fetch_depth_stencil = 0;
int GLAD_GLES_ARM_texture_unnormalized_coordinates = 0;
int GLAD_GLES_DMP_program_binary = 0;
int GLAD_GLES_DMP_shader_binary = 0;
int GLAD_GLES_EXT_EGL_image_array = 0;
int GLAD_GLES_EXT_EGL_image_storage = 0;
int GLAD_GLES_EXT_EGL_image_storage_compression = 0;
int GLAD_GLES_EXT_YUV_target = 0;
int GLAD_GLES_EXT_base_instance = 0;
int GLAD_GLES_EXT_blend_func_extended = 0;
int GLAD_GLES_EXT_blend_minmax = 0;
int GLAD_GLES_EXT_buffer_storage = 0;
int GLAD_GLES_EXT_clear_texture = 0;
int GLAD_GLES_EXT_clip_control = 0;
int GLAD_GLES_EXT_clip_cull_distance = 0;
int GLAD_GLES_EXT_color_buffer_float = 0;
int GLAD_GLES_EXT_color_buffer_half_float = 0;
int GLAD_GLES_EXT_conservative_depth = 0;
int GLAD_GLES_EXT_copy_image = 0;
int GLAD_GLES_EXT_debug_label = 0;
int GLAD_GLES_EXT_debug_marker = 0;
int GLAD_GLES_EXT_depth_clamp = 0;
int GLAD_GLES_EXT_discard_framebuffer = 0;
int GLAD_GLES_EXT_disjoint_timer_query = 0;
int GLAD_GLES_EXT_draw_buffers = 0;
int GLAD_GLES_EXT_draw_buffers_indexed = 0;
int GLAD_GLES_EXT_draw_elements_base_vertex = 0;
int GLAD_GLES_EXT_draw_instanced = 0;
int GLAD_GLES_EXT_draw_transform_feedback = 0;
int GLAD_GLES_EXT_external_buffer = 0;
int GLAD_GLES_EXT_float_blend = 0;
int GLAD_GLES_EXT_fragment_shading_rate = 0;
int GLAD_GLES_EXT_geometry_point_size = 0;
int GLAD_GLES_EXT_geometry_shader = 0;
int GLAD_GLES_EXT_gpu_shader5 = 0;
int GLAD_GLES_EXT_instanced_arrays = 0;
int GLAD_GLES_EXT_map_buffer_range = 0;
int GLAD_GLES_EXT_memory_object = 0;
int GLAD_GLES_EXT_memory_object_fd = 0;
int GLAD_GLES_EXT_memory_object_win32 = 0;
int GLAD_GLES_EXT_multi_draw_arrays = 0;
int GLAD_GLES_EXT_multi_draw_indirect = 0;
int GLAD_GLES_EXT_multisampled_compatibility = 0;
int GLAD_GLES_EXT_multisampled_render_to_texture = 0;
int GLAD_GLES_EXT_multisampled_render_to_texture2 = 0;
int GLAD_GLES_EXT_multiview_draw_buffers = 0;
int GLAD_GLES_EXT_multiview_tessellation_geometry_shader = 0;
int GLAD_GLES_EXT_multiview_texture_multisample = 0;
int GLAD_GLES_EXT_multiview_timer_query = 0;
int GLAD_GLES_EXT_occlusion_query_boolean = 0;
int GLAD_GLES_EXT_polygon_offset_clamp = 0;
int GLAD_GLES_EXT_post_depth_coverage = 0;
int GLAD_GLES_EXT_primitive_bounding_box = 0;
int GLAD_GLES_EXT_protected_textures = 0;
int GLAD_GLES_EXT_pvrtc_sRGB = 0;
int GLAD_GLES_EXT_raster_multisample = 0;
int GLAD_GLES_EXT_read_format_bgra = 0;
int GLAD_GLES_EXT_render_snorm = 0;
int GLAD_GLES_EXT_robustness = 0;
int GLAD_GLES_EXT_sRGB = 0;
int GLAD_GLES_EXT_sRGB_write_control = 0;
int GLAD_GLES_EXT_semaphore = 0;
int GLAD_GLES_EXT_semaphore_fd = 0;
int GLAD_GLES_EXT_semaphore_win32 = 0;
int GLAD_GLES_EXT_separate_depth_stencil = 0;
int GLAD_GLES_EXT_separate_shader_objects = 0;
int GLAD_GLES_EXT_shader_framebuffer_fetch = 0;
int GLAD_GLES_EXT_shader_framebuffer_fetch_non_coherent = 0;
int GLAD_GLES_EXT_shader_group_vote = 0;
int GLAD_GLES_EXT_shader_implicit_conversions = 0;
int GLAD_GLES_EXT_shader_integer_mix = 0;
int GLAD_GLES_EXT_shader_io_blocks = 0;
int GLAD_GLES_EXT_shader_non_constant_global_initializers = 0;
int GLAD_GLES_EXT_shader_pixel_local_storage = 0;
int GLAD_GLES_EXT_shader_pixel_local_storage2 = 0;
int GLAD_GLES_EXT_shader_samples_identical = 0;
int GLAD_GLES_EXT_shader_texture_lod = 0;
int GLAD_GLES_EXT_shadow_samplers = 0;
int GLAD_GLES_EXT_sparse_texture = 0;
int GLAD_GLES_EXT_sparse_texture2 = 0;
int GLAD_GLES_EXT_tessellation_point_size = 0;
int GLAD_GLES_EXT_tessellation_shader = 0;
int GLAD_GLES_EXT_texture_border_clamp = 0;
int GLAD_GLES_EXT_texture_buffer = 0;
int GLAD_GLES_EXT_texture_compression_astc_decode_mode = 0;
int GLAD_GLES_EXT_texture_compression_bptc = 0;
int GLAD_GLES_EXT_texture_compression_dxt1 = 0;
int GLAD_GLES_EXT_texture_compression_rgtc = 0;
int GLAD_GLES_EXT_texture_compression_s3tc = 0;
int GLAD_GLES_EXT_texture_compression_s3tc_srgb = 0;
int GLAD_GLES_EXT_texture_cube_map_array = 0;
int GLAD_GLES_EXT_texture_filter_anisotropic = 0;
int GLAD_GLES_EXT_texture_filter_minmax = 0;
int GLAD_GLES_EXT_texture_format_BGRA8888 = 0;
int GLAD_GLES_EXT_texture_format_sRGB_override = 0;
int GLAD_GLES_EXT_texture_mirror_clamp_to_edge = 0;
int GLAD_GLES_EXT_texture_norm16 = 0;
int GLAD_GLES_EXT_texture_query_lod = 0;
int GLAD_GLES_EXT_texture_rg = 0;
int GLAD_GLES_EXT_texture_sRGB_R8 = 0;
int GLAD_GLES_EXT_texture_sRGB_RG8 = 0;
int GLAD_GLES_EXT_texture_sRGB_decode = 0;
int GLAD_GLES_EXT_texture_shadow_lod = 0;
int GLAD_GLES_EXT_texture_storage = 0;
int GLAD_GLES_EXT_texture_storage_compression = 0;
int GLAD_GLES_EXT_texture_type_2_10_10_10_REV = 0;
int GLAD_GLES_EXT_texture_view = 0;
int GLAD_GLES_EXT_unpack_subimage = 0;
int GLAD_GLES_EXT_win32_keyed_mutex = 0;
int GLAD_GLES_EXT_window_rectangles = 0;
int GLAD_GLES_FJ_shader_binary_GCCSO = 0;
int GLAD_GLES_IMG_bindless_texture = 0;
int GLAD_GLES_IMG_framebuffer_downsample = 0;
int GLAD_GLES_IMG_multisampled_render_to_texture = 0;
int GLAD_GLES_IMG_program_binary = 0;
int GLAD_GLES_IMG_read_format = 0;
int GLAD_GLES_IMG_shader_binary = 0;
int GLAD_GLES_IMG_texture_compression_pvrtc = 0;
int GLAD_GLES_IMG_texture_compression_pvrtc2 = 0;
int GLAD_GLES_IMG_texture_filter_cubic = 0;
int GLAD_GLES_INTEL_blackhole_render = 0;
int GLAD_GLES_INTEL_conservative_rasterization = 0;
int GLAD_GLES_INTEL_framebuffer_CMAA = 0;
int GLAD_GLES_INTEL_performance_query = 0;
int GLAD_GLES_KHR_blend_equation_advanced = 0;
int GLAD_GLES_KHR_blend_equation_advanced_coherent = 0;
int GLAD_GLES_KHR_context_flush_control = 0;
int GLAD_GLES_KHR_debug = 0;
int GLAD_GLES_KHR_no_error = 0;
int GLAD_GLES_KHR_parallel_shader_compile = 0;
int GLAD_GLES_KHR_robust_buffer_access_behavior = 0;
int GLAD_GLES_KHR_robustness = 0;
int GLAD_GLES_KHR_shader_subgroup = 0;
int GLAD_GLES_KHR_texture_compression_astc_hdr = 0;
int GLAD_GLES_KHR_texture_compression_astc_ldr = 0;
int GLAD_GLES_KHR_texture_compression_astc_sliced_3d = 0;
int GLAD_GLES_MESA_bgra = 0;
int GLAD_GLES_MESA_framebuffer_flip_x = 0;
int GLAD_GLES_MESA_framebuffer_flip_y = 0;
int GLAD_GLES_MESA_framebuffer_swap_xy = 0;
int GLAD_GLES_MESA_program_binary_formats = 0;
int GLAD_GLES_MESA_shader_integer_functions = 0;
int GLAD_GLES_NVX_blend_equation_advanced_multi_draw_buffers = 0;
int GLAD_GLES_NV_bindless_texture = 0;
int GLAD_GLES_NV_blend_equation_advanced = 0;
int GLAD_GLES_NV_blend_equation_advanced_coherent = 0;
int GLAD_GLES_NV_blend_minmax_factor = 0;
int GLAD_GLES_NV_clip_space_w_scaling = 0;
int GLAD_GLES_NV_compute_shader_derivatives = 0;
int GLAD_GLES_NV_conditional_render = 0;
int GLAD_GLES_NV_conservative_raster = 0;
int GLAD_GLES_NV_conservative_raster_pre_snap = 0;
int GLAD_GLES_NV_conservative_raster_pre_snap_triangles = 0;
int GLAD_GLES_NV_copy_buffer = 0;
int GLAD_GLES_NV_coverage_sample = 0;
int GLAD_GLES_NV_depth_nonlinear = 0;
int GLAD_GLES_NV_draw_buffers = 0;
int GLAD_GLES_NV_draw_instanced = 0;
int GLAD_GLES_NV_draw_vulkan_image = 0;
int GLAD_GLES_NV_explicit_attrib_location = 0;
int GLAD_GLES_NV_fbo_color_attachments = 0;
int GLAD_GLES_NV_fence = 0;
int GLAD_GLES_NV_fill_rectangle = 0;
int GLAD_GLES_NV_fragment_coverage_to_color = 0;
int GLAD_GLES_NV_fragment_shader_barycentric = 0;
int GLAD_GLES_NV_fragment_shader_interlock = 0;
int GLAD_GLES_NV_framebuffer_blit = 0;
int GLAD_GLES_NV_framebuffer_mixed_samples = 0;
int GLAD_GLES_NV_framebuffer_multisample = 0;
int GLAD_GLES_NV_generate_mipmap_sRGB = 0;
int GLAD_GLES_NV_geometry_shader_passthrough = 0;
int GLAD_GLES_NV_gpu_shader5 = 0;
int GLAD_GLES_NV_image_formats = 0;
int GLAD_GLES_NV_instanced_arrays = 0;
int GLAD_GLES_NV_internalformat_sample_query = 0;
int GLAD_GLES_NV_memory_attachment = 0;
int GLAD_GLES_NV_memory_object_sparse = 0;
int GLAD_GLES_NV_mesh_shader = 0;
int GLAD_GLES_NV_non_square_matrices = 0;
int GLAD_GLES_NV_path_rendering = 0;
int GLAD_GLES_NV_path_rendering_shared_edge = 0;
int GLAD_GLES_NV_pixel_buffer_object = 0;
int GLAD_GLES_NV_polygon_mode = 0;
int GLAD_GLES_NV_primitive_shading_rate = 0;
int GLAD_GLES_NV_read_buffer = 0;
int GLAD_GLES_NV_read_buffer_front = 0;
int GLAD_GLES_NV_read_depth = 0;
int GLAD_GLES_NV_read_depth_stencil = 0;
int GLAD_GLES_NV_read_stencil = 0;
int GLAD_GLES_NV_representative_fragment_test = 0;
int GLAD_GLES_NV_sRGB_formats = 0;
int GLAD_GLES_NV_sample_locations = 0;
int GLAD_GLES_NV_sample_mask_override_coverage = 0;
int GLAD_GLES_NV_scissor_exclusive = 0;
int GLAD_GLES_NV_shader_atomic_fp16_vector = 0;
int GLAD_GLES_NV_shader_noperspective_interpolation = 0;
int GLAD_GLES_NV_shader_subgroup_partitioned = 0;
int GLAD_GLES_NV_shader_texture_footprint = 0;
int GLAD_GLES_NV_shading_rate_image = 0;
int GLAD_GLES_NV_shadow_samplers_array = 0;
int GLAD_GLES_NV_shadow_samplers_cube = 0;
int GLAD_GLES_NV_stereo_view_rendering = 0;
int GLAD_GLES_NV_texture_border_clamp = 0;
int GLAD_GLES_NV_texture_compression_s3tc_update = 0;
int GLAD_GLES_NV_texture_npot_2D_mipmap = 0;
int GLAD_GLES_NV_timeline_semaphore = 0;
int GLAD_GLES_NV_viewport_array = 0;
int GLAD_GLES_NV_viewport_array2 = 0;
int GLAD_GLES_NV_viewport_swizzle = 0;
int GLAD_GLES_OES_EGL_image = 0;
int GLAD_GLES_OES_EGL_image_external = 0;
int GLAD_GLES_OES_EGL_image_external_essl3 = 0;
int GLAD_GLES_OES_compressed_ETC1_RGB8_sub_texture = 0;
int GLAD_GLES_OES_compressed_ETC1_RGB8_texture = 0;
int GLAD_GLES_OES_compressed_paletted_texture = 0;
int GLAD_GLES_OES_copy_image = 0;
int GLAD_GLES_OES_depth24 = 0;
int GLAD_GLES_OES_depth32 = 0;
int GLAD_GLES_OES_depth_texture = 0;
int GLAD_GLES_OES_draw_buffers_indexed = 0;
int GLAD_GLES_OES_draw_elements_base_vertex = 0;
int GLAD_GLES_OES_element_index_uint = 0;
int GLAD_GLES_OES_fbo_render_mipmap = 0;
int GLAD_GLES_OES_fragment_precision_high = 0;
int GLAD_GLES_OES_geometry_point_size = 0;
int GLAD_GLES_OES_geometry_shader = 0;
int GLAD_GLES_OES_get_program_binary = 0;
int GLAD_GLES_OES_gpu_shader5 = 0;
int GLAD_GLES_OES_mapbuffer = 0;
int GLAD_GLES_OES_packed_depth_stencil = 0;
int GLAD_GLES_OES_primitive_bounding_box = 0;
int GLAD_GLES_OES_required_internalformat = 0;
int GLAD_GLES_OES_rgb8_rgba8 = 0;
int GLAD_GLES_OES_sample_shading = 0;
int GLAD_GLES_OES_sample_variables = 0;
int GLAD_GLES_OES_shader_image_atomic = 0;
int GLAD_GLES_OES_shader_io_blocks = 0;
int GLAD_GLES_OES_shader_multisample_interpolation = 0;
int GLAD_GLES_OES_standard_derivatives = 0;
int GLAD_GLES_OES_stencil1 = 0;
int GLAD_GLES_OES_stencil4 = 0;
int GLAD_GLES_OES_surfaceless_context = 0;
int GLAD_GLES_OES_tessellation_point_size = 0;
int GLAD_GLES_OES_tessellation_shader = 0;
int GLAD_GLES_OES_texture_3D = 0;
int GLAD_GLES_OES_texture_border_clamp = 0;
int GLAD_GLES_OES_texture_buffer = 0;
int GLAD_GLES_OES_texture_compression_astc = 0;
int GLAD_GLES_OES_texture_cube_map_array = 0;
int GLAD_GLES_OES_texture_float = 0;
int GLAD_GLES_OES_texture_float_linear = 0;
int GLAD_GLES_OES_texture_half_float = 0;
int GLAD_GLES_OES_texture_half_float_linear = 0;
int GLAD_GLES_OES_texture_npot = 0;
int GLAD_GLES_OES_texture_stencil8 = 0;
int GLAD_GLES_OES_texture_storage_multisample_2d_array = 0;
int GLAD_GLES_OES_texture_view = 0;
int GLAD_GLES_OES_vertex_array_object = 0;
int GLAD_GLES_OES_vertex_half_float = 0;
int GLAD_GLES_OES_vertex_type_10_10_10_2 = 0;
int GLAD_GLES_OES_viewport_array = 0;
int GLAD_GLES_OVR_multiview = 0;
int GLAD_GLES_OVR_multiview2 = 0;
int GLAD_GLES_OVR_multiview_multisampled_render_to_texture = 0;
int GLAD_GLES_QCOM_YUV_texture_gather = 0;
int GLAD_GLES_QCOM_alpha_test = 0;
int GLAD_GLES_QCOM_binning_control = 0;
int GLAD_GLES_QCOM_driver_control = 0;
int GLAD_GLES_QCOM_extended_get = 0;
int GLAD_GLES_QCOM_extended_get2 = 0;
int GLAD_GLES_QCOM_frame_extrapolation = 0;
int GLAD_GLES_QCOM_framebuffer_foveated = 0;
int GLAD_GLES_QCOM_motion_estimation = 0;
int GLAD_GLES_QCOM_perfmon_global_mode = 0;
int GLAD_GLES_QCOM_render_shared_exponent = 0;
int GLAD_GLES_QCOM_shader_framebuffer_fetch_noncoherent = 0;
int GLAD_GLES_QCOM_shader_framebuffer_fetch_rate = 0;
int GLAD_GLES_QCOM_shading_rate = 0;
int GLAD_GLES_QCOM_texture_foveated = 0;
int GLAD_GLES_QCOM_texture_foveated2 = 0;
int GLAD_GLES_QCOM_texture_foveated_subsampled_layout = 0;
int GLAD_GLES_QCOM_tiled_rendering = 0;
int GLAD_GLES_QCOM_writeonly_rendering = 0;
int GLAD_GLES_VIV_shader_binary = 0;



PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glad_glesAcquireKeyedMutexWin32EXT = NULL;
PFNGLACTIVESHADERPROGRAMPROC glad_glesActiveShaderProgram = NULL;
PFNGLACTIVESHADERPROGRAMEXTPROC glad_glesActiveShaderProgramEXT = NULL;
PFNGLACTIVETEXTUREPROC glad_glesActiveTexture = NULL;
PFNGLALPHAFUNCQCOMPROC glad_glesAlphaFuncQCOM = NULL;
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glad_glesApplyFramebufferAttachmentCMAAINTEL = NULL;
PFNGLATTACHSHADERPROC glad_glesAttachShader = NULL;
PFNGLBEGINCONDITIONALRENDERNVPROC glad_glesBeginConditionalRenderNV = NULL;
PFNGLBEGINPERFMONITORAMDPROC glad_glesBeginPerfMonitorAMD = NULL;
PFNGLBEGINPERFQUERYINTELPROC glad_glesBeginPerfQueryINTEL = NULL;
PFNGLBEGINQUERYPROC glad_glesBeginQuery = NULL;
PFNGLBEGINQUERYEXTPROC glad_glesBeginQueryEXT = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glad_glesBeginTransformFeedback = NULL;
PFNGLBINDATTRIBLOCATIONPROC glad_glesBindAttribLocation = NULL;
PFNGLBINDBUFFERPROC glad_glesBindBuffer = NULL;
PFNGLBINDBUFFERBASEPROC glad_glesBindBufferBase = NULL;
PFNGLBINDBUFFERRANGEPROC glad_glesBindBufferRange = NULL;
PFNGLBINDFRAGDATALOCATIONEXTPROC glad_glesBindFragDataLocationEXT = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC glad_glesBindFragDataLocationIndexedEXT = NULL;
PFNGLBINDFRAMEBUFFERPROC glad_glesBindFramebuffer = NULL;
PFNGLBINDIMAGETEXTUREPROC glad_glesBindImageTexture = NULL;
PFNGLBINDPROGRAMPIPELINEPROC glad_glesBindProgramPipeline = NULL;
PFNGLBINDPROGRAMPIPELINEEXTPROC glad_glesBindProgramPipelineEXT = NULL;
PFNGLBINDRENDERBUFFERPROC glad_glesBindRenderbuffer = NULL;
PFNGLBINDSAMPLERPROC glad_glesBindSampler = NULL;
PFNGLBINDSHADINGRATEIMAGENVPROC glad_glesBindShadingRateImageNV = NULL;
PFNGLBINDTEXTUREPROC glad_glesBindTexture = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glad_glesBindTransformFeedback = NULL;
PFNGLBINDVERTEXARRAYPROC glad_glesBindVertexArray = NULL;
PFNGLBINDVERTEXARRAYOESPROC glad_glesBindVertexArrayOES = NULL;
PFNGLBINDVERTEXBUFFERPROC glad_glesBindVertexBuffer = NULL;
PFNGLBLENDBARRIERPROC glad_glesBlendBarrier = NULL;
PFNGLBLENDBARRIERKHRPROC glad_glesBlendBarrierKHR = NULL;
PFNGLBLENDBARRIERNVPROC glad_glesBlendBarrierNV = NULL;
PFNGLBLENDCOLORPROC glad_glesBlendColor = NULL;
PFNGLBLENDEQUATIONPROC glad_glesBlendEquation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glad_glesBlendEquationSeparate = NULL;
PFNGLBLENDEQUATIONSEPARATEIPROC glad_glesBlendEquationSeparatei = NULL;
PFNGLBLENDEQUATIONSEPARATEIEXTPROC glad_glesBlendEquationSeparateiEXT = NULL;
PFNGLBLENDEQUATIONSEPARATEIOESPROC glad_glesBlendEquationSeparateiOES = NULL;
PFNGLBLENDEQUATIONIPROC glad_glesBlendEquationi = NULL;
PFNGLBLENDEQUATIONIEXTPROC glad_glesBlendEquationiEXT = NULL;
PFNGLBLENDEQUATIONIOESPROC glad_glesBlendEquationiOES = NULL;
PFNGLBLENDFUNCPROC glad_glesBlendFunc = NULL;
PFNGLBLENDFUNCSEPARATEPROC glad_glesBlendFuncSeparate = NULL;
PFNGLBLENDFUNCSEPARATEIPROC glad_glesBlendFuncSeparatei = NULL;
PFNGLBLENDFUNCSEPARATEIEXTPROC glad_glesBlendFuncSeparateiEXT = NULL;
PFNGLBLENDFUNCSEPARATEIOESPROC glad_glesBlendFuncSeparateiOES = NULL;
PFNGLBLENDFUNCIPROC glad_glesBlendFunci = NULL;
PFNGLBLENDFUNCIEXTPROC glad_glesBlendFunciEXT = NULL;
PFNGLBLENDFUNCIOESPROC glad_glesBlendFunciOES = NULL;
PFNGLBLENDPARAMETERINVPROC glad_glesBlendParameteriNV = NULL;
PFNGLBLITFRAMEBUFFERPROC glad_glesBlitFramebuffer = NULL;
PFNGLBLITFRAMEBUFFERANGLEPROC glad_glesBlitFramebufferANGLE = NULL;
PFNGLBLITFRAMEBUFFERNVPROC glad_glesBlitFramebufferNV = NULL;
PFNGLBUFFERATTACHMEMORYNVPROC glad_glesBufferAttachMemoryNV = NULL;
PFNGLBUFFERDATAPROC glad_glesBufferData = NULL;
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glad_glesBufferPageCommitmentMemNV = NULL;
PFNGLBUFFERSTORAGEEXTPROC glad_glesBufferStorageEXT = NULL;
PFNGLBUFFERSTORAGEEXTERNALEXTPROC glad_glesBufferStorageExternalEXT = NULL;
PFNGLBUFFERSTORAGEMEMEXTPROC glad_glesBufferStorageMemEXT = NULL;
PFNGLBUFFERSUBDATAPROC glad_glesBufferSubData = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glad_glesCheckFramebufferStatus = NULL;
PFNGLCLEARPROC glad_glesClear = NULL;
PFNGLCLEARBUFFERFIPROC glad_glesClearBufferfi = NULL;
PFNGLCLEARBUFFERFVPROC glad_glesClearBufferfv = NULL;
PFNGLCLEARBUFFERIVPROC glad_glesClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glad_glesClearBufferuiv = NULL;
PFNGLCLEARCOLORPROC glad_glesClearColor = NULL;
PFNGLCLEARDEPTHFPROC glad_glesClearDepthf = NULL;
PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC glad_glesClearPixelLocalStorageuiEXT = NULL;
PFNGLCLEARSTENCILPROC glad_glesClearStencil = NULL;
PFNGLCLEARTEXIMAGEEXTPROC glad_glesClearTexImageEXT = NULL;
PFNGLCLEARTEXSUBIMAGEEXTPROC glad_glesClearTexSubImageEXT = NULL;
PFNGLCLIENTWAITSYNCPROC glad_glesClientWaitSync = NULL;
PFNGLCLIENTWAITSYNCAPPLEPROC glad_glesClientWaitSyncAPPLE = NULL;
PFNGLCLIPCONTROLEXTPROC glad_glesClipControlEXT = NULL;
PFNGLCOLORMASKPROC glad_glesColorMask = NULL;
PFNGLCOLORMASKIPROC glad_glesColorMaski = NULL;
PFNGLCOLORMASKIEXTPROC glad_glesColorMaskiEXT = NULL;
PFNGLCOLORMASKIOESPROC glad_glesColorMaskiOES = NULL;
PFNGLCOMPILESHADERPROC glad_glesCompileShader = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glad_glesCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glad_glesCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DOESPROC glad_glesCompressedTexImage3DOES = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glad_glesCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glad_glesCompressedTexSubImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC glad_glesCompressedTexSubImage3DOES = NULL;
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glad_glesConservativeRasterParameteriNV = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glad_glesCopyBufferSubData = NULL;
PFNGLCOPYBUFFERSUBDATANVPROC glad_glesCopyBufferSubDataNV = NULL;
PFNGLCOPYIMAGESUBDATAPROC glad_glesCopyImageSubData = NULL;
PFNGLCOPYIMAGESUBDATAEXTPROC glad_glesCopyImageSubDataEXT = NULL;
PFNGLCOPYIMAGESUBDATAOESPROC glad_glesCopyImageSubDataOES = NULL;
PFNGLCOPYPATHNVPROC glad_glesCopyPathNV = NULL;
PFNGLCOPYTEXIMAGE2DPROC glad_glesCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glad_glesCopyTexSubImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glad_glesCopyTexSubImage3D = NULL;
PFNGLCOPYTEXSUBIMAGE3DOESPROC glad_glesCopyTexSubImage3DOES = NULL;
PFNGLCOPYTEXTURELEVELSAPPLEPROC glad_glesCopyTextureLevelsAPPLE = NULL;
PFNGLCOVERFILLPATHINSTANCEDNVPROC glad_glesCoverFillPathInstancedNV = NULL;
PFNGLCOVERFILLPATHNVPROC glad_glesCoverFillPathNV = NULL;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glad_glesCoverStrokePathInstancedNV = NULL;
PFNGLCOVERSTROKEPATHNVPROC glad_glesCoverStrokePathNV = NULL;
PFNGLCOVERAGEMASKNVPROC glad_glesCoverageMaskNV = NULL;
PFNGLCOVERAGEMODULATIONNVPROC glad_glesCoverageModulationNV = NULL;
PFNGLCOVERAGEMODULATIONTABLENVPROC glad_glesCoverageModulationTableNV = NULL;
PFNGLCOVERAGEOPERATIONNVPROC glad_glesCoverageOperationNV = NULL;
PFNGLCREATEMEMORYOBJECTSEXTPROC glad_glesCreateMemoryObjectsEXT = NULL;
PFNGLCREATEPERFQUERYINTELPROC glad_glesCreatePerfQueryINTEL = NULL;
PFNGLCREATEPROGRAMPROC glad_glesCreateProgram = NULL;
PFNGLCREATESEMAPHORESNVPROC glad_glesCreateSemaphoresNV = NULL;
PFNGLCREATESHADERPROC glad_glesCreateShader = NULL;
PFNGLCREATESHADERPROGRAMVPROC glad_glesCreateShaderProgramv = NULL;
PFNGLCREATESHADERPROGRAMVEXTPROC glad_glesCreateShaderProgramvEXT = NULL;
PFNGLCULLFACEPROC glad_glesCullFace = NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glad_glesDebugMessageCallback = NULL;
PFNGLDEBUGMESSAGECALLBACKKHRPROC glad_glesDebugMessageCallbackKHR = NULL;
PFNGLDEBUGMESSAGECONTROLPROC glad_glesDebugMessageControl = NULL;
PFNGLDEBUGMESSAGECONTROLKHRPROC glad_glesDebugMessageControlKHR = NULL;
PFNGLDEBUGMESSAGEINSERTPROC glad_glesDebugMessageInsert = NULL;
PFNGLDEBUGMESSAGEINSERTKHRPROC glad_glesDebugMessageInsertKHR = NULL;
PFNGLDELETEBUFFERSPROC glad_glesDeleteBuffers = NULL;
PFNGLDELETEFENCESNVPROC glad_glesDeleteFencesNV = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glad_glesDeleteFramebuffers = NULL;
PFNGLDELETEMEMORYOBJECTSEXTPROC glad_glesDeleteMemoryObjectsEXT = NULL;
PFNGLDELETEPATHSNVPROC glad_glesDeletePathsNV = NULL;
PFNGLDELETEPERFMONITORSAMDPROC glad_glesDeletePerfMonitorsAMD = NULL;
PFNGLDELETEPERFQUERYINTELPROC glad_glesDeletePerfQueryINTEL = NULL;
PFNGLDELETEPROGRAMPROC glad_glesDeleteProgram = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glad_glesDeleteProgramPipelines = NULL;
PFNGLDELETEPROGRAMPIPELINESEXTPROC glad_glesDeleteProgramPipelinesEXT = NULL;
PFNGLDELETEQUERIESPROC glad_glesDeleteQueries = NULL;
PFNGLDELETEQUERIESEXTPROC glad_glesDeleteQueriesEXT = NULL;
PFNGLDELETERENDERBUFFERSPROC glad_glesDeleteRenderbuffers = NULL;
PFNGLDELETESAMPLERSPROC glad_glesDeleteSamplers = NULL;
PFNGLDELETESEMAPHORESEXTPROC glad_glesDeleteSemaphoresEXT = NULL;
PFNGLDELETESHADERPROC glad_glesDeleteShader = NULL;
PFNGLDELETESYNCPROC glad_glesDeleteSync = NULL;
PFNGLDELETESYNCAPPLEPROC glad_glesDeleteSyncAPPLE = NULL;
PFNGLDELETETEXTURESPROC glad_glesDeleteTextures = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glad_glesDeleteTransformFeedbacks = NULL;
PFNGLDELETEVERTEXARRAYSPROC glad_glesDeleteVertexArrays = NULL;
PFNGLDELETEVERTEXARRAYSOESPROC glad_glesDeleteVertexArraysOES = NULL;
PFNGLDEPTHFUNCPROC glad_glesDepthFunc = NULL;
PFNGLDEPTHMASKPROC glad_glesDepthMask = NULL;
PFNGLDEPTHRANGEARRAYFVNVPROC glad_glesDepthRangeArrayfvNV = NULL;
PFNGLDEPTHRANGEARRAYFVOESPROC glad_glesDepthRangeArrayfvOES = NULL;
PFNGLDEPTHRANGEINDEXEDFNVPROC glad_glesDepthRangeIndexedfNV = NULL;
PFNGLDEPTHRANGEINDEXEDFOESPROC glad_glesDepthRangeIndexedfOES = NULL;
PFNGLDEPTHRANGEFPROC glad_glesDepthRangef = NULL;
PFNGLDETACHSHADERPROC glad_glesDetachShader = NULL;
PFNGLDISABLEPROC glad_glesDisable = NULL;
PFNGLDISABLEDRIVERCONTROLQCOMPROC glad_glesDisableDriverControlQCOM = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glad_glesDisableVertexAttribArray = NULL;
PFNGLDISABLEIPROC glad_glesDisablei = NULL;
PFNGLDISABLEIEXTPROC glad_glesDisableiEXT = NULL;
PFNGLDISABLEINVPROC glad_glesDisableiNV = NULL;
PFNGLDISABLEIOESPROC glad_glesDisableiOES = NULL;
PFNGLDISCARDFRAMEBUFFEREXTPROC glad_glesDiscardFramebufferEXT = NULL;
PFNGLDISPATCHCOMPUTEPROC glad_glesDispatchCompute = NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glad_glesDispatchComputeIndirect = NULL;
PFNGLDRAWARRAYSPROC glad_glesDrawArrays = NULL;
PFNGLDRAWARRAYSINDIRECTPROC glad_glesDrawArraysIndirect = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC glad_glesDrawArraysInstanced = NULL;
PFNGLDRAWARRAYSINSTANCEDANGLEPROC glad_glesDrawArraysInstancedANGLE = NULL;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC glad_glesDrawArraysInstancedBaseInstanceEXT = NULL;
PFNGLDRAWARRAYSINSTANCEDEXTPROC glad_glesDrawArraysInstancedEXT = NULL;
PFNGLDRAWARRAYSINSTANCEDNVPROC glad_glesDrawArraysInstancedNV = NULL;
PFNGLDRAWBUFFERSPROC glad_glesDrawBuffers = NULL;
PFNGLDRAWBUFFERSEXTPROC glad_glesDrawBuffersEXT = NULL;
PFNGLDRAWBUFFERSINDEXEDEXTPROC glad_glesDrawBuffersIndexedEXT = NULL;
PFNGLDRAWBUFFERSNVPROC glad_glesDrawBuffersNV = NULL;
PFNGLDRAWELEMENTSPROC glad_glesDrawElements = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC glad_glesDrawElementsBaseVertex = NULL;
PFNGLDRAWELEMENTSBASEVERTEXEXTPROC glad_glesDrawElementsBaseVertexEXT = NULL;
PFNGLDRAWELEMENTSBASEVERTEXOESPROC glad_glesDrawElementsBaseVertexOES = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glad_glesDrawElementsIndirect = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glad_glesDrawElementsInstanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDANGLEPROC glad_glesDrawElementsInstancedANGLE = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC glad_glesDrawElementsInstancedBaseInstanceEXT = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glad_glesDrawElementsInstancedBaseVertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC glad_glesDrawElementsInstancedBaseVertexBaseInstanceEXT = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC glad_glesDrawElementsInstancedBaseVertexEXT = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC glad_glesDrawElementsInstancedBaseVertexOES = NULL;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glad_glesDrawElementsInstancedEXT = NULL;
PFNGLDRAWELEMENTSINSTANCEDNVPROC glad_glesDrawElementsInstancedNV = NULL;
PFNGLDRAWMESHTASKSINDIRECTNVPROC glad_glesDrawMeshTasksIndirectNV = NULL;
PFNGLDRAWMESHTASKSNVPROC glad_glesDrawMeshTasksNV = NULL;
PFNGLDRAWRANGEELEMENTSPROC glad_glesDrawRangeElements = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glad_glesDrawRangeElementsBaseVertex = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC glad_glesDrawRangeElementsBaseVertexEXT = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC glad_glesDrawRangeElementsBaseVertexOES = NULL;
PFNGLDRAWTRANSFORMFEEDBACKEXTPROC glad_glesDrawTransformFeedbackEXT = NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC glad_glesDrawTransformFeedbackInstancedEXT = NULL;
PFNGLDRAWVKIMAGENVPROC glad_glesDrawVkImageNV = NULL;
PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC glad_glesEGLImageTargetRenderbufferStorageOES = NULL;
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glad_glesEGLImageTargetTexStorageEXT = NULL;
PFNGLEGLIMAGETARGETTEXTURE2DOESPROC glad_glesEGLImageTargetTexture2DOES = NULL;
PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glad_glesEGLImageTargetTextureStorageEXT = NULL;
PFNGLENABLEPROC glad_glesEnable = NULL;
PFNGLENABLEDRIVERCONTROLQCOMPROC glad_glesEnableDriverControlQCOM = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glad_glesEnableVertexAttribArray = NULL;
PFNGLENABLEIPROC glad_glesEnablei = NULL;
PFNGLENABLEIEXTPROC glad_glesEnableiEXT = NULL;
PFNGLENABLEINVPROC glad_glesEnableiNV = NULL;
PFNGLENABLEIOESPROC glad_glesEnableiOES = NULL;
PFNGLENDCONDITIONALRENDERNVPROC glad_glesEndConditionalRenderNV = NULL;
PFNGLENDPERFMONITORAMDPROC glad_glesEndPerfMonitorAMD = NULL;
PFNGLENDPERFQUERYINTELPROC glad_glesEndPerfQueryINTEL = NULL;
PFNGLENDQUERYPROC glad_glesEndQuery = NULL;
PFNGLENDQUERYEXTPROC glad_glesEndQueryEXT = NULL;
PFNGLENDTILINGQCOMPROC glad_glesEndTilingQCOM = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glad_glesEndTransformFeedback = NULL;
PFNGLEXTGETBUFFERPOINTERVQCOMPROC glad_glesExtGetBufferPointervQCOM = NULL;
PFNGLEXTGETBUFFERSQCOMPROC glad_glesExtGetBuffersQCOM = NULL;
PFNGLEXTGETFRAMEBUFFERSQCOMPROC glad_glesExtGetFramebuffersQCOM = NULL;
PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC glad_glesExtGetProgramBinarySourceQCOM = NULL;
PFNGLEXTGETPROGRAMSQCOMPROC glad_glesExtGetProgramsQCOM = NULL;
PFNGLEXTGETRENDERBUFFERSQCOMPROC glad_glesExtGetRenderbuffersQCOM = NULL;
PFNGLEXTGETSHADERSQCOMPROC glad_glesExtGetShadersQCOM = NULL;
PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC glad_glesExtGetTexLevelParameterivQCOM = NULL;
PFNGLEXTGETTEXSUBIMAGEQCOMPROC glad_glesExtGetTexSubImageQCOM = NULL;
PFNGLEXTGETTEXTURESQCOMPROC glad_glesExtGetTexturesQCOM = NULL;
PFNGLEXTISPROGRAMBINARYQCOMPROC glad_glesExtIsProgramBinaryQCOM = NULL;
PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC glad_glesExtTexObjectStateOverrideiQCOM = NULL;
PFNGLEXTRAPOLATETEX2DQCOMPROC glad_glesExtrapolateTex2DQCOM = NULL;
PFNGLFENCESYNCPROC glad_glesFenceSync = NULL;
PFNGLFENCESYNCAPPLEPROC glad_glesFenceSyncAPPLE = NULL;
PFNGLFINISHPROC glad_glesFinish = NULL;
PFNGLFINISHFENCENVPROC glad_glesFinishFenceNV = NULL;
PFNGLFLUSHPROC glad_glesFlush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glad_glesFlushMappedBufferRange = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC glad_glesFlushMappedBufferRangeEXT = NULL;
PFNGLFRAGMENTCOVERAGECOLORNVPROC glad_glesFragmentCoverageColorNV = NULL;
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glad_glesFramebufferFetchBarrierEXT = NULL;
PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC glad_glesFramebufferFetchBarrierQCOM = NULL;
PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC glad_glesFramebufferFoveationConfigQCOM = NULL;
PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC glad_glesFramebufferFoveationParametersQCOM = NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glad_glesFramebufferParameteri = NULL;
PFNGLFRAMEBUFFERPARAMETERIMESAPROC glad_glesFramebufferParameteriMESA = NULL;
PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC glad_glesFramebufferPixelLocalStorageSizeEXT = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glad_glesFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glad_glesFramebufferSampleLocationsfvNV = NULL;
PFNGLFRAMEBUFFERSHADINGRATEEXTPROC glad_glesFramebufferShadingRateEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glad_glesFramebufferTexture = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glad_glesFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC glad_glesFramebufferTexture2DDownsampleIMG = NULL;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC glad_glesFramebufferTexture2DMultisampleEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC glad_glesFramebufferTexture2DMultisampleIMG = NULL;
PFNGLFRAMEBUFFERTEXTURE3DOESPROC glad_glesFramebufferTexture3DOES = NULL;
PFNGLFRAMEBUFFERTEXTUREEXTPROC glad_glesFramebufferTextureEXT = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glad_glesFramebufferTextureLayer = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC glad_glesFramebufferTextureLayerDownsampleIMG = NULL;
PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC glad_glesFramebufferTextureMultisampleMultiviewOVR = NULL;
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glad_glesFramebufferTextureMultiviewOVR = NULL;
PFNGLFRAMEBUFFERTEXTUREOESPROC glad_glesFramebufferTextureOES = NULL;
PFNGLFRONTFACEPROC glad_glesFrontFace = NULL;
PFNGLGENBUFFERSPROC glad_glesGenBuffers = NULL;
PFNGLGENFENCESNVPROC glad_glesGenFencesNV = NULL;
PFNGLGENFRAMEBUFFERSPROC glad_glesGenFramebuffers = NULL;
PFNGLGENPATHSNVPROC glad_glesGenPathsNV = NULL;
PFNGLGENPERFMONITORSAMDPROC glad_glesGenPerfMonitorsAMD = NULL;
PFNGLGENPROGRAMPIPELINESPROC glad_glesGenProgramPipelines = NULL;
PFNGLGENPROGRAMPIPELINESEXTPROC glad_glesGenProgramPipelinesEXT = NULL;
PFNGLGENQUERIESPROC glad_glesGenQueries = NULL;
PFNGLGENQUERIESEXTPROC glad_glesGenQueriesEXT = NULL;
PFNGLGENRENDERBUFFERSPROC glad_glesGenRenderbuffers = NULL;
PFNGLGENSAMPLERSPROC glad_glesGenSamplers = NULL;
PFNGLGENSEMAPHORESEXTPROC glad_glesGenSemaphoresEXT = NULL;
PFNGLGENTEXTURESPROC glad_glesGenTextures = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glad_glesGenTransformFeedbacks = NULL;
PFNGLGENVERTEXARRAYSPROC glad_glesGenVertexArrays = NULL;
PFNGLGENVERTEXARRAYSOESPROC glad_glesGenVertexArraysOES = NULL;
PFNGLGENERATEMIPMAPPROC glad_glesGenerateMipmap = NULL;
PFNGLGETACTIVEATTRIBPROC glad_glesGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC glad_glesGetActiveUniform = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glad_glesGetActiveUniformBlockName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glad_glesGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glad_glesGetActiveUniformsiv = NULL;
PFNGLGETATTACHEDSHADERSPROC glad_glesGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glad_glesGetAttribLocation = NULL;
PFNGLGETBOOLEANI_VPROC glad_glesGetBooleani_v = NULL;
PFNGLGETBOOLEANVPROC glad_glesGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glad_glesGetBufferParameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glad_glesGetBufferParameteriv = NULL;
PFNGLGETBUFFERPOINTERVPROC glad_glesGetBufferPointerv = NULL;
PFNGLGETBUFFERPOINTERVOESPROC glad_glesGetBufferPointervOES = NULL;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glad_glesGetCoverageModulationTableNV = NULL;
PFNGLGETDEBUGMESSAGELOGPROC glad_glesGetDebugMessageLog = NULL;
PFNGLGETDEBUGMESSAGELOGKHRPROC glad_glesGetDebugMessageLogKHR = NULL;
PFNGLGETDRIVERCONTROLSTRINGQCOMPROC glad_glesGetDriverControlStringQCOM = NULL;
PFNGLGETDRIVERCONTROLSQCOMPROC glad_glesGetDriverControlsQCOM = NULL;
PFNGLGETERRORPROC glad_glesGetError = NULL;
PFNGLGETFENCEIVNVPROC glad_glesGetFenceivNV = NULL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC glad_glesGetFirstPerfQueryIdINTEL = NULL;
PFNGLGETFLOATI_VNVPROC glad_glesGetFloati_vNV = NULL;
PFNGLGETFLOATI_VOESPROC glad_glesGetFloati_vOES = NULL;
PFNGLGETFLOATVPROC glad_glesGetFloatv = NULL;
PFNGLGETFRAGDATAINDEXEXTPROC glad_glesGetFragDataIndexEXT = NULL;
PFNGLGETFRAGDATALOCATIONPROC glad_glesGetFragDataLocation = NULL;
PFNGLGETFRAGMENTSHADINGRATESEXTPROC glad_glesGetFragmentShadingRatesEXT = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_glesGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glad_glesGetFramebufferParameteriv = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glad_glesGetFramebufferParameterivMESA = NULL;
PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC glad_glesGetFramebufferPixelLocalStorageSizeEXT = NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glad_glesGetGraphicsResetStatus = NULL;
PFNGLGETGRAPHICSRESETSTATUSEXTPROC glad_glesGetGraphicsResetStatusEXT = NULL;
PFNGLGETGRAPHICSRESETSTATUSKHRPROC glad_glesGetGraphicsResetStatusKHR = NULL;
PFNGLGETIMAGEHANDLENVPROC glad_glesGetImageHandleNV = NULL;
PFNGLGETINTEGER64I_VPROC glad_glesGetInteger64i_v = NULL;
PFNGLGETINTEGER64VPROC glad_glesGetInteger64v = NULL;
PFNGLGETINTEGER64VAPPLEPROC glad_glesGetInteger64vAPPLE = NULL;
PFNGLGETINTEGER64VEXTPROC glad_glesGetInteger64vEXT = NULL;
PFNGLGETINTEGERI_VPROC glad_glesGetIntegeri_v = NULL;
PFNGLGETINTEGERI_VEXTPROC glad_glesGetIntegeri_vEXT = NULL;
PFNGLGETINTEGERVPROC glad_glesGetIntegerv = NULL;
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glad_glesGetInternalformatSampleivNV = NULL;
PFNGLGETINTERNALFORMATIVPROC glad_glesGetInternalformativ = NULL;
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glad_glesGetMemoryObjectDetachedResourcesuivNV = NULL;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glad_glesGetMemoryObjectParameterivEXT = NULL;
PFNGLGETMULTISAMPLEFVPROC glad_glesGetMultisamplefv = NULL;
PFNGLGETNEXTPERFQUERYIDINTELPROC glad_glesGetNextPerfQueryIdINTEL = NULL;
PFNGLGETOBJECTLABELPROC glad_glesGetObjectLabel = NULL;
PFNGLGETOBJECTLABELEXTPROC glad_glesGetObjectLabelEXT = NULL;
PFNGLGETOBJECTLABELKHRPROC glad_glesGetObjectLabelKHR = NULL;
PFNGLGETOBJECTPTRLABELPROC glad_glesGetObjectPtrLabel = NULL;
PFNGLGETOBJECTPTRLABELKHRPROC glad_glesGetObjectPtrLabelKHR = NULL;
PFNGLGETPATHCOMMANDSNVPROC glad_glesGetPathCommandsNV = NULL;
PFNGLGETPATHCOORDSNVPROC glad_glesGetPathCoordsNV = NULL;
PFNGLGETPATHDASHARRAYNVPROC glad_glesGetPathDashArrayNV = NULL;
PFNGLGETPATHLENGTHNVPROC glad_glesGetPathLengthNV = NULL;
PFNGLGETPATHMETRICRANGENVPROC glad_glesGetPathMetricRangeNV = NULL;
PFNGLGETPATHMETRICSNVPROC glad_glesGetPathMetricsNV = NULL;
PFNGLGETPATHPARAMETERFVNVPROC glad_glesGetPathParameterfvNV = NULL;
PFNGLGETPATHPARAMETERIVNVPROC glad_glesGetPathParameterivNV = NULL;
PFNGLGETPATHSPACINGNVPROC glad_glesGetPathSpacingNV = NULL;
PFNGLGETPERFCOUNTERINFOINTELPROC glad_glesGetPerfCounterInfoINTEL = NULL;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glad_glesGetPerfMonitorCounterDataAMD = NULL;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glad_glesGetPerfMonitorCounterInfoAMD = NULL;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glad_glesGetPerfMonitorCounterStringAMD = NULL;
PFNGLGETPERFMONITORCOUNTERSAMDPROC glad_glesGetPerfMonitorCountersAMD = NULL;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glad_glesGetPerfMonitorGroupStringAMD = NULL;
PFNGLGETPERFMONITORGROUPSAMDPROC glad_glesGetPerfMonitorGroupsAMD = NULL;
PFNGLGETPERFQUERYDATAINTELPROC glad_glesGetPerfQueryDataINTEL = NULL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glad_glesGetPerfQueryIdByNameINTEL = NULL;
PFNGLGETPERFQUERYINFOINTELPROC glad_glesGetPerfQueryInfoINTEL = NULL;
PFNGLGETPOINTERVPROC glad_glesGetPointerv = NULL;
PFNGLGETPOINTERVKHRPROC glad_glesGetPointervKHR = NULL;
PFNGLGETPROGRAMBINARYPROC glad_glesGetProgramBinary = NULL;
PFNGLGETPROGRAMBINARYOESPROC glad_glesGetProgramBinaryOES = NULL;
PFNGLGETPROGRAMINFOLOGPROC glad_glesGetProgramInfoLog = NULL;
PFNGLGETPROGRAMINTERFACEIVPROC glad_glesGetProgramInterfaceiv = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glad_glesGetProgramPipelineInfoLog = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC glad_glesGetProgramPipelineInfoLogEXT = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC glad_glesGetProgramPipelineiv = NULL;
PFNGLGETPROGRAMPIPELINEIVEXTPROC glad_glesGetProgramPipelineivEXT = NULL;
PFNGLGETPROGRAMRESOURCEINDEXPROC glad_glesGetProgramResourceIndex = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glad_glesGetProgramResourceLocation = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC glad_glesGetProgramResourceLocationIndexEXT = NULL;
PFNGLGETPROGRAMRESOURCENAMEPROC glad_glesGetProgramResourceName = NULL;
PFNGLGETPROGRAMRESOURCEFVNVPROC glad_glesGetProgramResourcefvNV = NULL;
PFNGLGETPROGRAMRESOURCEIVPROC glad_glesGetProgramResourceiv = NULL;
PFNGLGETPROGRAMIVPROC glad_glesGetProgramiv = NULL;
PFNGLGETQUERYOBJECTI64VEXTPROC glad_glesGetQueryObjecti64vEXT = NULL;
PFNGLGETQUERYOBJECTIVEXTPROC glad_glesGetQueryObjectivEXT = NULL;
PFNGLGETQUERYOBJECTUI64VEXTPROC glad_glesGetQueryObjectui64vEXT = NULL;
PFNGLGETQUERYOBJECTUIVPROC glad_glesGetQueryObjectuiv = NULL;
PFNGLGETQUERYOBJECTUIVEXTPROC glad_glesGetQueryObjectuivEXT = NULL;
PFNGLGETQUERYIVPROC glad_glesGetQueryiv = NULL;
PFNGLGETQUERYIVEXTPROC glad_glesGetQueryivEXT = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glad_glesGetRenderbufferParameteriv = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glad_glesGetSamplerParameterIiv = NULL;
PFNGLGETSAMPLERPARAMETERIIVEXTPROC glad_glesGetSamplerParameterIivEXT = NULL;
PFNGLGETSAMPLERPARAMETERIIVOESPROC glad_glesGetSamplerParameterIivOES = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glad_glesGetSamplerParameterIuiv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVEXTPROC glad_glesGetSamplerParameterIuivEXT = NULL;
PFNGLGETSAMPLERPARAMETERIUIVOESPROC glad_glesGetSamplerParameterIuivOES = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glad_glesGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glad_glesGetSamplerParameteriv = NULL;
PFNGLGETSEMAPHOREPARAMETERIVNVPROC glad_glesGetSemaphoreParameterivNV = NULL;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glad_glesGetSemaphoreParameterui64vEXT = NULL;
PFNGLGETSHADERINFOLOGPROC glad_glesGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glad_glesGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glad_glesGetShaderSource = NULL;
PFNGLGETSHADERIVPROC glad_glesGetShaderiv = NULL;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glad_glesGetShadingRateImagePaletteNV = NULL;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glad_glesGetShadingRateSampleLocationivNV = NULL;
PFNGLGETSTRINGPROC glad_glesGetString = NULL;
PFNGLGETSTRINGIPROC glad_glesGetStringi = NULL;
PFNGLGETSYNCIVPROC glad_glesGetSynciv = NULL;
PFNGLGETSYNCIVAPPLEPROC glad_glesGetSyncivAPPLE = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glad_glesGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glad_glesGetTexLevelParameteriv = NULL;
PFNGLGETTEXPARAMETERIIVPROC glad_glesGetTexParameterIiv = NULL;
PFNGLGETTEXPARAMETERIIVEXTPROC glad_glesGetTexParameterIivEXT = NULL;
PFNGLGETTEXPARAMETERIIVOESPROC glad_glesGetTexParameterIivOES = NULL;
PFNGLGETTEXPARAMETERIUIVPROC glad_glesGetTexParameterIuiv = NULL;
PFNGLGETTEXPARAMETERIUIVEXTPROC glad_glesGetTexParameterIuivEXT = NULL;
PFNGLGETTEXPARAMETERIUIVOESPROC glad_glesGetTexParameterIuivOES = NULL;
PFNGLGETTEXPARAMETERFVPROC glad_glesGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glad_glesGetTexParameteriv = NULL;
PFNGLGETTEXTUREHANDLEIMGPROC glad_glesGetTextureHandleIMG = NULL;
PFNGLGETTEXTUREHANDLENVPROC glad_glesGetTextureHandleNV = NULL;
PFNGLGETTEXTURESAMPLERHANDLEIMGPROC glad_glesGetTextureSamplerHandleIMG = NULL;
PFNGLGETTEXTURESAMPLERHANDLENVPROC glad_glesGetTextureSamplerHandleNV = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glad_glesGetTransformFeedbackVarying = NULL;
PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC glad_glesGetTranslatedShaderSourceANGLE = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glad_glesGetUniformBlockIndex = NULL;
PFNGLGETUNIFORMINDICESPROC glad_glesGetUniformIndices = NULL;
PFNGLGETUNIFORMLOCATIONPROC glad_glesGetUniformLocation = NULL;
PFNGLGETUNIFORMFVPROC glad_glesGetUniformfv = NULL;
PFNGLGETUNIFORMI64VNVPROC glad_glesGetUniformi64vNV = NULL;
PFNGLGETUNIFORMIVPROC glad_glesGetUniformiv = NULL;
PFNGLGETUNIFORMUIVPROC glad_glesGetUniformuiv = NULL;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC glad_glesGetUnsignedBytei_vEXT = NULL;
PFNGLGETUNSIGNEDBYTEVEXTPROC glad_glesGetUnsignedBytevEXT = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glad_glesGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glad_glesGetVertexAttribIuiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glad_glesGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBFVPROC glad_glesGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC glad_glesGetVertexAttribiv = NULL;
PFNGLGETVKPROCADDRNVPROC glad_glesGetVkProcAddrNV = NULL;
PFNGLGETNUNIFORMFVPROC glad_glesGetnUniformfv = NULL;
PFNGLGETNUNIFORMFVEXTPROC glad_glesGetnUniformfvEXT = NULL;
PFNGLGETNUNIFORMFVKHRPROC glad_glesGetnUniformfvKHR = NULL;
PFNGLGETNUNIFORMIVPROC glad_glesGetnUniformiv = NULL;
PFNGLGETNUNIFORMIVEXTPROC glad_glesGetnUniformivEXT = NULL;
PFNGLGETNUNIFORMIVKHRPROC glad_glesGetnUniformivKHR = NULL;
PFNGLGETNUNIFORMUIVPROC glad_glesGetnUniformuiv = NULL;
PFNGLGETNUNIFORMUIVKHRPROC glad_glesGetnUniformuivKHR = NULL;
PFNGLHINTPROC glad_glesHint = NULL;
PFNGLIMPORTMEMORYFDEXTPROC glad_glesImportMemoryFdEXT = NULL;
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glad_glesImportMemoryWin32HandleEXT = NULL;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC glad_glesImportMemoryWin32NameEXT = NULL;
PFNGLIMPORTSEMAPHOREFDEXTPROC glad_glesImportSemaphoreFdEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glad_glesImportSemaphoreWin32HandleEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC glad_glesImportSemaphoreWin32NameEXT = NULL;
PFNGLINSERTEVENTMARKEREXTPROC glad_glesInsertEventMarkerEXT = NULL;
PFNGLINTERPOLATEPATHSNVPROC glad_glesInterpolatePathsNV = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glad_glesInvalidateFramebuffer = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glad_glesInvalidateSubFramebuffer = NULL;
PFNGLISBUFFERPROC glad_glesIsBuffer = NULL;
PFNGLISENABLEDPROC glad_glesIsEnabled = NULL;
PFNGLISENABLEDIPROC glad_glesIsEnabledi = NULL;
PFNGLISENABLEDIEXTPROC glad_glesIsEnablediEXT = NULL;
PFNGLISENABLEDINVPROC glad_glesIsEnablediNV = NULL;
PFNGLISENABLEDIOESPROC glad_glesIsEnablediOES = NULL;
PFNGLISFENCENVPROC glad_glesIsFenceNV = NULL;
PFNGLISFRAMEBUFFERPROC glad_glesIsFramebuffer = NULL;
PFNGLISIMAGEHANDLERESIDENTNVPROC glad_glesIsImageHandleResidentNV = NULL;
PFNGLISMEMORYOBJECTEXTPROC glad_glesIsMemoryObjectEXT = NULL;
PFNGLISPATHNVPROC glad_glesIsPathNV = NULL;
PFNGLISPOINTINFILLPATHNVPROC glad_glesIsPointInFillPathNV = NULL;
PFNGLISPOINTINSTROKEPATHNVPROC glad_glesIsPointInStrokePathNV = NULL;
PFNGLISPROGRAMPROC glad_glesIsProgram = NULL;
PFNGLISPROGRAMPIPELINEPROC glad_glesIsProgramPipeline = NULL;
PFNGLISPROGRAMPIPELINEEXTPROC glad_glesIsProgramPipelineEXT = NULL;
PFNGLISQUERYPROC glad_glesIsQuery = NULL;
PFNGLISQUERYEXTPROC glad_glesIsQueryEXT = NULL;
PFNGLISRENDERBUFFERPROC glad_glesIsRenderbuffer = NULL;
PFNGLISSAMPLERPROC glad_glesIsSampler = NULL;
PFNGLISSEMAPHOREEXTPROC glad_glesIsSemaphoreEXT = NULL;
PFNGLISSHADERPROC glad_glesIsShader = NULL;
PFNGLISSYNCPROC glad_glesIsSync = NULL;
PFNGLISSYNCAPPLEPROC glad_glesIsSyncAPPLE = NULL;
PFNGLISTEXTUREPROC glad_glesIsTexture = NULL;
PFNGLISTEXTUREHANDLERESIDENTNVPROC glad_glesIsTextureHandleResidentNV = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glad_glesIsTransformFeedback = NULL;
PFNGLISVERTEXARRAYPROC glad_glesIsVertexArray = NULL;
PFNGLISVERTEXARRAYOESPROC glad_glesIsVertexArrayOES = NULL;
PFNGLLABELOBJECTEXTPROC glad_glesLabelObjectEXT = NULL;
PFNGLLINEWIDTHPROC glad_glesLineWidth = NULL;
PFNGLLINKPROGRAMPROC glad_glesLinkProgram = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glad_glesMakeImageHandleNonResidentNV = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glad_glesMakeImageHandleResidentNV = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glad_glesMakeTextureHandleNonResidentNV = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glad_glesMakeTextureHandleResidentNV = NULL;
PFNGLMAPBUFFEROESPROC glad_glesMapBufferOES = NULL;
PFNGLMAPBUFFERRANGEPROC glad_glesMapBufferRange = NULL;
PFNGLMAPBUFFERRANGEEXTPROC glad_glesMapBufferRangeEXT = NULL;
PFNGLMATRIXFRUSTUMEXTPROC glad_glesMatrixFrustumEXT = NULL;
PFNGLMATRIXLOAD3X2FNVPROC glad_glesMatrixLoad3x2fNV = NULL;
PFNGLMATRIXLOAD3X3FNVPROC glad_glesMatrixLoad3x3fNV = NULL;
PFNGLMATRIXLOADIDENTITYEXTPROC glad_glesMatrixLoadIdentityEXT = NULL;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glad_glesMatrixLoadTranspose3x3fNV = NULL;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glad_glesMatrixLoadTransposedEXT = NULL;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glad_glesMatrixLoadTransposefEXT = NULL;
PFNGLMATRIXLOADDEXTPROC glad_glesMatrixLoaddEXT = NULL;
PFNGLMATRIXLOADFEXTPROC glad_glesMatrixLoadfEXT = NULL;
PFNGLMATRIXMULT3X2FNVPROC glad_glesMatrixMult3x2fNV = NULL;
PFNGLMATRIXMULT3X3FNVPROC glad_glesMatrixMult3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glad_glesMatrixMultTranspose3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glad_glesMatrixMultTransposedEXT = NULL;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glad_glesMatrixMultTransposefEXT = NULL;
PFNGLMATRIXMULTDEXTPROC glad_glesMatrixMultdEXT = NULL;
PFNGLMATRIXMULTFEXTPROC glad_glesMatrixMultfEXT = NULL;
PFNGLMATRIXORTHOEXTPROC glad_glesMatrixOrthoEXT = NULL;
PFNGLMATRIXPOPEXTPROC glad_glesMatrixPopEXT = NULL;
PFNGLMATRIXPUSHEXTPROC glad_glesMatrixPushEXT = NULL;
PFNGLMATRIXROTATEDEXTPROC glad_glesMatrixRotatedEXT = NULL;
PFNGLMATRIXROTATEFEXTPROC glad_glesMatrixRotatefEXT = NULL;
PFNGLMATRIXSCALEDEXTPROC glad_glesMatrixScaledEXT = NULL;
PFNGLMATRIXSCALEFEXTPROC glad_glesMatrixScalefEXT = NULL;
PFNGLMATRIXTRANSLATEDEXTPROC glad_glesMatrixTranslatedEXT = NULL;
PFNGLMATRIXTRANSLATEFEXTPROC glad_glesMatrixTranslatefEXT = NULL;
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glad_glesMaxShaderCompilerThreadsKHR = NULL;
PFNGLMEMORYBARRIERPROC glad_glesMemoryBarrier = NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glad_glesMemoryBarrierByRegion = NULL;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC glad_glesMemoryObjectParameterivEXT = NULL;
PFNGLMINSAMPLESHADINGPROC glad_glesMinSampleShading = NULL;
PFNGLMINSAMPLESHADINGOESPROC glad_glesMinSampleShadingOES = NULL;
PFNGLMULTIDRAWARRAYSEXTPROC glad_glesMultiDrawArraysEXT = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC glad_glesMultiDrawArraysIndirectEXT = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC glad_glesMultiDrawElementsBaseVertexEXT = NULL;
PFNGLMULTIDRAWELEMENTSEXTPROC glad_glesMultiDrawElementsEXT = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC glad_glesMultiDrawElementsIndirectEXT = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glad_glesMultiDrawMeshTasksIndirectCountNV = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glad_glesMultiDrawMeshTasksIndirectNV = NULL;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glad_glesNamedBufferAttachMemoryNV = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glad_glesNamedBufferPageCommitmentMemNV = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glad_glesNamedBufferStorageExternalEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC glad_glesNamedBufferStorageMemEXT = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glad_glesNamedFramebufferSampleLocationsfvNV = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glad_glesNamedRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLOBJECTLABELPROC glad_glesObjectLabel = NULL;
PFNGLOBJECTLABELKHRPROC glad_glesObjectLabelKHR = NULL;
PFNGLOBJECTPTRLABELPROC glad_glesObjectPtrLabel = NULL;
PFNGLOBJECTPTRLABELKHRPROC glad_glesObjectPtrLabelKHR = NULL;
PFNGLPATCHPARAMETERIPROC glad_glesPatchParameteri = NULL;
PFNGLPATCHPARAMETERIEXTPROC glad_glesPatchParameteriEXT = NULL;
PFNGLPATCHPARAMETERIOESPROC glad_glesPatchParameteriOES = NULL;
PFNGLPATHCOMMANDSNVPROC glad_glesPathCommandsNV = NULL;
PFNGLPATHCOORDSNVPROC glad_glesPathCoordsNV = NULL;
PFNGLPATHCOVERDEPTHFUNCNVPROC glad_glesPathCoverDepthFuncNV = NULL;
PFNGLPATHDASHARRAYNVPROC glad_glesPathDashArrayNV = NULL;
PFNGLPATHGLYPHINDEXARRAYNVPROC glad_glesPathGlyphIndexArrayNV = NULL;
PFNGLPATHGLYPHINDEXRANGENVPROC glad_glesPathGlyphIndexRangeNV = NULL;
PFNGLPATHGLYPHRANGENVPROC glad_glesPathGlyphRangeNV = NULL;
PFNGLPATHGLYPHSNVPROC glad_glesPathGlyphsNV = NULL;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glad_glesPathMemoryGlyphIndexArrayNV = NULL;
PFNGLPATHPARAMETERFNVPROC glad_glesPathParameterfNV = NULL;
PFNGLPATHPARAMETERFVNVPROC glad_glesPathParameterfvNV = NULL;
PFNGLPATHPARAMETERINVPROC glad_glesPathParameteriNV = NULL;
PFNGLPATHPARAMETERIVNVPROC glad_glesPathParameterivNV = NULL;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC glad_glesPathStencilDepthOffsetNV = NULL;
PFNGLPATHSTENCILFUNCNVPROC glad_glesPathStencilFuncNV = NULL;
PFNGLPATHSTRINGNVPROC glad_glesPathStringNV = NULL;
PFNGLPATHSUBCOMMANDSNVPROC glad_glesPathSubCommandsNV = NULL;
PFNGLPATHSUBCOORDSNVPROC glad_glesPathSubCoordsNV = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glad_glesPauseTransformFeedback = NULL;
PFNGLPIXELSTOREIPROC glad_glesPixelStorei = NULL;
PFNGLPOINTALONGPATHNVPROC glad_glesPointAlongPathNV = NULL;
PFNGLPOLYGONMODENVPROC glad_glesPolygonModeNV = NULL;
PFNGLPOLYGONOFFSETPROC glad_glesPolygonOffset = NULL;
PFNGLPOLYGONOFFSETCLAMPEXTPROC glad_glesPolygonOffsetClampEXT = NULL;
PFNGLPOPDEBUGGROUPPROC glad_glesPopDebugGroup = NULL;
PFNGLPOPDEBUGGROUPKHRPROC glad_glesPopDebugGroupKHR = NULL;
PFNGLPOPGROUPMARKEREXTPROC glad_glesPopGroupMarkerEXT = NULL;
PFNGLPRIMITIVEBOUNDINGBOXPROC glad_glesPrimitiveBoundingBox = NULL;
PFNGLPRIMITIVEBOUNDINGBOXEXTPROC glad_glesPrimitiveBoundingBoxEXT = NULL;
PFNGLPRIMITIVEBOUNDINGBOXOESPROC glad_glesPrimitiveBoundingBoxOES = NULL;
PFNGLPROGRAMBINARYPROC glad_glesProgramBinary = NULL;
PFNGLPROGRAMBINARYOESPROC glad_glesProgramBinaryOES = NULL;
PFNGLPROGRAMPARAMETERIPROC glad_glesProgramParameteri = NULL;
PFNGLPROGRAMPARAMETERIEXTPROC glad_glesProgramParameteriEXT = NULL;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glad_glesProgramPathFragmentInputGenNV = NULL;
PFNGLPROGRAMUNIFORM1FPROC glad_glesProgramUniform1f = NULL;
PFNGLPROGRAMUNIFORM1FEXTPROC glad_glesProgramUniform1fEXT = NULL;
PFNGLPROGRAMUNIFORM1FVPROC glad_glesProgramUniform1fv = NULL;
PFNGLPROGRAMUNIFORM1FVEXTPROC glad_glesProgramUniform1fvEXT = NULL;
PFNGLPROGRAMUNIFORM1IPROC glad_glesProgramUniform1i = NULL;
PFNGLPROGRAMUNIFORM1I64NVPROC glad_glesProgramUniform1i64NV = NULL;
PFNGLPROGRAMUNIFORM1I64VNVPROC glad_glesProgramUniform1i64vNV = NULL;
PFNGLPROGRAMUNIFORM1IEXTPROC glad_glesProgramUniform1iEXT = NULL;
PFNGLPROGRAMUNIFORM1IVPROC glad_glesProgramUniform1iv = NULL;
PFNGLPROGRAMUNIFORM1IVEXTPROC glad_glesProgramUniform1ivEXT = NULL;
PFNGLPROGRAMUNIFORM1UIPROC glad_glesProgramUniform1ui = NULL;
PFNGLPROGRAMUNIFORM1UI64NVPROC glad_glesProgramUniform1ui64NV = NULL;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glad_glesProgramUniform1ui64vNV = NULL;
PFNGLPROGRAMUNIFORM1UIEXTPROC glad_glesProgramUniform1uiEXT = NULL;
PFNGLPROGRAMUNIFORM1UIVPROC glad_glesProgramUniform1uiv = NULL;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glad_glesProgramUniform1uivEXT = NULL;
PFNGLPROGRAMUNIFORM2FPROC glad_glesProgramUniform2f = NULL;
PFNGLPROGRAMUNIFORM2FEXTPROC glad_glesProgramUniform2fEXT = NULL;
PFNGLPROGRAMUNIFORM2FVPROC glad_glesProgramUniform2fv = NULL;
PFNGLPROGRAMUNIFORM2FVEXTPROC glad_glesProgramUniform2fvEXT = NULL;
PFNGLPROGRAMUNIFORM2IPROC glad_glesProgramUniform2i = NULL;
PFNGLPROGRAMUNIFORM2I64NVPROC glad_glesProgramUniform2i64NV = NULL;
PFNGLPROGRAMUNIFORM2I64VNVPROC glad_glesProgramUniform2i64vNV = NULL;
PFNGLPROGRAMUNIFORM2IEXTPROC glad_glesProgramUniform2iEXT = NULL;
PFNGLPROGRAMUNIFORM2IVPROC glad_glesProgramUniform2iv = NULL;
PFNGLPROGRAMUNIFORM2IVEXTPROC glad_glesProgramUniform2ivEXT = NULL;
PFNGLPROGRAMUNIFORM2UIPROC glad_glesProgramUniform2ui = NULL;
PFNGLPROGRAMUNIFORM2UI64NVPROC glad_glesProgramUniform2ui64NV = NULL;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glad_glesProgramUniform2ui64vNV = NULL;
PFNGLPROGRAMUNIFORM2UIEXTPROC glad_glesProgramUniform2uiEXT = NULL;
PFNGLPROGRAMUNIFORM2UIVPROC glad_glesProgramUniform2uiv = NULL;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glad_glesProgramUniform2uivEXT = NULL;
PFNGLPROGRAMUNIFORM3FPROC glad_glesProgramUniform3f = NULL;
PFNGLPROGRAMUNIFORM3FEXTPROC glad_glesProgramUniform3fEXT = NULL;
PFNGLPROGRAMUNIFORM3FVPROC glad_glesProgramUniform3fv = NULL;
PFNGLPROGRAMUNIFORM3FVEXTPROC glad_glesProgramUniform3fvEXT = NULL;
PFNGLPROGRAMUNIFORM3IPROC glad_glesProgramUniform3i = NULL;
PFNGLPROGRAMUNIFORM3I64NVPROC glad_glesProgramUniform3i64NV = NULL;
PFNGLPROGRAMUNIFORM3I64VNVPROC glad_glesProgramUniform3i64vNV = NULL;
PFNGLPROGRAMUNIFORM3IEXTPROC glad_glesProgramUniform3iEXT = NULL;
PFNGLPROGRAMUNIFORM3IVPROC glad_glesProgramUniform3iv = NULL;
PFNGLPROGRAMUNIFORM3IVEXTPROC glad_glesProgramUniform3ivEXT = NULL;
PFNGLPROGRAMUNIFORM3UIPROC glad_glesProgramUniform3ui = NULL;
PFNGLPROGRAMUNIFORM3UI64NVPROC glad_glesProgramUniform3ui64NV = NULL;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glad_glesProgramUniform3ui64vNV = NULL;
PFNGLPROGRAMUNIFORM3UIEXTPROC glad_glesProgramUniform3uiEXT = NULL;
PFNGLPROGRAMUNIFORM3UIVPROC glad_glesProgramUniform3uiv = NULL;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glad_glesProgramUniform3uivEXT = NULL;
PFNGLPROGRAMUNIFORM4FPROC glad_glesProgramUniform4f = NULL;
PFNGLPROGRAMUNIFORM4FEXTPROC glad_glesProgramUniform4fEXT = NULL;
PFNGLPROGRAMUNIFORM4FVPROC glad_glesProgramUniform4fv = NULL;
PFNGLPROGRAMUNIFORM4FVEXTPROC glad_glesProgramUniform4fvEXT = NULL;
PFNGLPROGRAMUNIFORM4IPROC glad_glesProgramUniform4i = NULL;
PFNGLPROGRAMUNIFORM4I64NVPROC glad_glesProgramUniform4i64NV = NULL;
PFNGLPROGRAMUNIFORM4I64VNVPROC glad_glesProgramUniform4i64vNV = NULL;
PFNGLPROGRAMUNIFORM4IEXTPROC glad_glesProgramUniform4iEXT = NULL;
PFNGLPROGRAMUNIFORM4IVPROC glad_glesProgramUniform4iv = NULL;
PFNGLPROGRAMUNIFORM4IVEXTPROC glad_glesProgramUniform4ivEXT = NULL;
PFNGLPROGRAMUNIFORM4UIPROC glad_glesProgramUniform4ui = NULL;
PFNGLPROGRAMUNIFORM4UI64NVPROC glad_glesProgramUniform4ui64NV = NULL;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glad_glesProgramUniform4ui64vNV = NULL;
PFNGLPROGRAMUNIFORM4UIEXTPROC glad_glesProgramUniform4uiEXT = NULL;
PFNGLPROGRAMUNIFORM4UIVPROC glad_glesProgramUniform4uiv = NULL;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glad_glesProgramUniform4uivEXT = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC glad_glesProgramUniformHandleui64IMG = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glad_glesProgramUniformHandleui64NV = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC glad_glesProgramUniformHandleui64vIMG = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glad_glesProgramUniformHandleui64vNV = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glad_glesProgramUniformMatrix2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glad_glesProgramUniformMatrix2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glad_glesProgramUniformMatrix2x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glad_glesProgramUniformMatrix2x3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glad_glesProgramUniformMatrix2x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glad_glesProgramUniformMatrix2x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glad_glesProgramUniformMatrix3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glad_glesProgramUniformMatrix3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glad_glesProgramUniformMatrix3x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glad_glesProgramUniformMatrix3x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glad_glesProgramUniformMatrix3x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glad_glesProgramUniformMatrix3x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glad_glesProgramUniformMatrix4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glad_glesProgramUniformMatrix4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glad_glesProgramUniformMatrix4x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glad_glesProgramUniformMatrix4x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glad_glesProgramUniformMatrix4x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glad_glesProgramUniformMatrix4x3fvEXT = NULL;
PFNGLPUSHDEBUGGROUPPROC glad_glesPushDebugGroup = NULL;
PFNGLPUSHDEBUGGROUPKHRPROC glad_glesPushDebugGroupKHR = NULL;
PFNGLPUSHGROUPMARKEREXTPROC glad_glesPushGroupMarkerEXT = NULL;
PFNGLQUERYCOUNTEREXTPROC glad_glesQueryCounterEXT = NULL;
PFNGLRASTERSAMPLESEXTPROC glad_glesRasterSamplesEXT = NULL;
PFNGLREADBUFFERPROC glad_glesReadBuffer = NULL;
PFNGLREADBUFFERINDEXEDEXTPROC glad_glesReadBufferIndexedEXT = NULL;
PFNGLREADBUFFERNVPROC glad_glesReadBufferNV = NULL;
PFNGLREADPIXELSPROC glad_glesReadPixels = NULL;
PFNGLREADNPIXELSPROC glad_glesReadnPixels = NULL;
PFNGLREADNPIXELSEXTPROC glad_glesReadnPixelsEXT = NULL;
PFNGLREADNPIXELSKHRPROC glad_glesReadnPixelsKHR = NULL;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glad_glesReleaseKeyedMutexWin32EXT = NULL;
PFNGLRELEASESHADERCOMPILERPROC glad_glesReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glad_glesRenderbufferStorage = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glad_glesRenderbufferStorageMultisample = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC glad_glesRenderbufferStorageMultisampleANGLE = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC glad_glesRenderbufferStorageMultisampleAPPLE = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glad_glesRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glad_glesRenderbufferStorageMultisampleEXT = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC glad_glesRenderbufferStorageMultisampleIMG = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC glad_glesRenderbufferStorageMultisampleNV = NULL;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glad_glesResetMemoryObjectParameterNV = NULL;
PFNGLRESOLVEDEPTHVALUESNVPROC glad_glesResolveDepthValuesNV = NULL;
PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC glad_glesResolveMultisampleFramebufferAPPLE = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glad_glesResumeTransformFeedback = NULL;
PFNGLSAMPLECOVERAGEPROC glad_glesSampleCoverage = NULL;
PFNGLSAMPLEMASKIPROC glad_glesSampleMaski = NULL;
PFNGLSAMPLERPARAMETERIIVPROC glad_glesSamplerParameterIiv = NULL;
PFNGLSAMPLERPARAMETERIIVEXTPROC glad_glesSamplerParameterIivEXT = NULL;
PFNGLSAMPLERPARAMETERIIVOESPROC glad_glesSamplerParameterIivOES = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glad_glesSamplerParameterIuiv = NULL;
PFNGLSAMPLERPARAMETERIUIVEXTPROC glad_glesSamplerParameterIuivEXT = NULL;
PFNGLSAMPLERPARAMETERIUIVOESPROC glad_glesSamplerParameterIuivOES = NULL;
PFNGLSAMPLERPARAMETERFPROC glad_glesSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glad_glesSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC glad_glesSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glad_glesSamplerParameteriv = NULL;
PFNGLSCISSORPROC glad_glesScissor = NULL;
PFNGLSCISSORARRAYVNVPROC glad_glesScissorArrayvNV = NULL;
PFNGLSCISSORARRAYVOESPROC glad_glesScissorArrayvOES = NULL;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glad_glesScissorExclusiveArrayvNV = NULL;
PFNGLSCISSOREXCLUSIVENVPROC glad_glesScissorExclusiveNV = NULL;
PFNGLSCISSORINDEXEDNVPROC glad_glesScissorIndexedNV = NULL;
PFNGLSCISSORINDEXEDOESPROC glad_glesScissorIndexedOES = NULL;
PFNGLSCISSORINDEXEDVNVPROC glad_glesScissorIndexedvNV = NULL;
PFNGLSCISSORINDEXEDVOESPROC glad_glesScissorIndexedvOES = NULL;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glad_glesSelectPerfMonitorCountersAMD = NULL;
PFNGLSEMAPHOREPARAMETERIVNVPROC glad_glesSemaphoreParameterivNV = NULL;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC glad_glesSemaphoreParameterui64vEXT = NULL;
PFNGLSETFENCENVPROC glad_glesSetFenceNV = NULL;
PFNGLSHADERBINARYPROC glad_glesShaderBinary = NULL;
PFNGLSHADERSOURCEPROC glad_glesShaderSource = NULL;
PFNGLSHADINGRATECOMBINEROPSEXTPROC glad_glesShadingRateCombinerOpsEXT = NULL;
PFNGLSHADINGRATEEXTPROC glad_glesShadingRateEXT = NULL;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC glad_glesShadingRateImageBarrierNV = NULL;
PFNGLSHADINGRATEIMAGEPALETTENVPROC glad_glesShadingRateImagePaletteNV = NULL;
PFNGLSHADINGRATEQCOMPROC glad_glesShadingRateQCOM = NULL;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glad_glesShadingRateSampleOrderCustomNV = NULL;
PFNGLSHADINGRATESAMPLEORDERNVPROC glad_glesShadingRateSampleOrderNV = NULL;
PFNGLSIGNALSEMAPHOREEXTPROC glad_glesSignalSemaphoreEXT = NULL;
PFNGLSIGNALVKFENCENVPROC glad_glesSignalVkFenceNV = NULL;
PFNGLSIGNALVKSEMAPHORENVPROC glad_glesSignalVkSemaphoreNV = NULL;
PFNGLSTARTTILINGQCOMPROC glad_glesStartTilingQCOM = NULL;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC glad_glesStencilFillPathInstancedNV = NULL;
PFNGLSTENCILFILLPATHNVPROC glad_glesStencilFillPathNV = NULL;
PFNGLSTENCILFUNCPROC glad_glesStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glad_glesStencilFuncSeparate = NULL;
PFNGLSTENCILMASKPROC glad_glesStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glad_glesStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glad_glesStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glad_glesStencilOpSeparate = NULL;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glad_glesStencilStrokePathInstancedNV = NULL;
PFNGLSTENCILSTROKEPATHNVPROC glad_glesStencilStrokePathNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glad_glesStencilThenCoverFillPathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC glad_glesStencilThenCoverFillPathNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glad_glesStencilThenCoverStrokePathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glad_glesStencilThenCoverStrokePathNV = NULL;
PFNGLSUBPIXELPRECISIONBIASNVPROC glad_glesSubpixelPrecisionBiasNV = NULL;
PFNGLTESTFENCENVPROC glad_glesTestFenceNV = NULL;
PFNGLTEXATTACHMEMORYNVPROC glad_glesTexAttachMemoryNV = NULL;
PFNGLTEXBUFFERPROC glad_glesTexBuffer = NULL;
PFNGLTEXBUFFEREXTPROC glad_glesTexBufferEXT = NULL;
PFNGLTEXBUFFEROESPROC glad_glesTexBufferOES = NULL;
PFNGLTEXBUFFERRANGEPROC glad_glesTexBufferRange = NULL;
PFNGLTEXBUFFERRANGEEXTPROC glad_glesTexBufferRangeEXT = NULL;
PFNGLTEXBUFFERRANGEOESPROC glad_glesTexBufferRangeOES = NULL;
PFNGLTEXESTIMATEMOTIONQCOMPROC glad_glesTexEstimateMotionQCOM = NULL;
PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC glad_glesTexEstimateMotionRegionsQCOM = NULL;
PFNGLTEXIMAGE2DPROC glad_glesTexImage2D = NULL;
PFNGLTEXIMAGE3DPROC glad_glesTexImage3D = NULL;
PFNGLTEXIMAGE3DOESPROC glad_glesTexImage3DOES = NULL;
PFNGLTEXPAGECOMMITMENTEXTPROC glad_glesTexPageCommitmentEXT = NULL;
PFNGLTEXPAGECOMMITMENTMEMNVPROC glad_glesTexPageCommitmentMemNV = NULL;
PFNGLTEXPARAMETERIIVPROC glad_glesTexParameterIiv = NULL;
PFNGLTEXPARAMETERIIVEXTPROC glad_glesTexParameterIivEXT = NULL;
PFNGLTEXPARAMETERIIVOESPROC glad_glesTexParameterIivOES = NULL;
PFNGLTEXPARAMETERIUIVPROC glad_glesTexParameterIuiv = NULL;
PFNGLTEXPARAMETERIUIVEXTPROC glad_glesTexParameterIuivEXT = NULL;
PFNGLTEXPARAMETERIUIVOESPROC glad_glesTexParameterIuivOES = NULL;
PFNGLTEXPARAMETERFPROC glad_glesTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glad_glesTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glad_glesTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glad_glesTexParameteriv = NULL;
PFNGLTEXSTORAGE1DEXTPROC glad_glesTexStorage1DEXT = NULL;
PFNGLTEXSTORAGE2DPROC glad_glesTexStorage2D = NULL;
PFNGLTEXSTORAGE2DEXTPROC glad_glesTexStorage2DEXT = NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glad_glesTexStorage2DMultisample = NULL;
PFNGLTEXSTORAGE3DPROC glad_glesTexStorage3D = NULL;
PFNGLTEXSTORAGE3DEXTPROC glad_glesTexStorage3DEXT = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glad_glesTexStorage3DMultisample = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC glad_glesTexStorage3DMultisampleOES = NULL;
PFNGLTEXSTORAGEATTRIBS2DEXTPROC glad_glesTexStorageAttribs2DEXT = NULL;
PFNGLTEXSTORAGEATTRIBS3DEXTPROC glad_glesTexStorageAttribs3DEXT = NULL;
PFNGLTEXSTORAGEMEM2DEXTPROC glad_glesTexStorageMem2DEXT = NULL;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glad_glesTexStorageMem2DMultisampleEXT = NULL;
PFNGLTEXSTORAGEMEM3DEXTPROC glad_glesTexStorageMem3DEXT = NULL;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glad_glesTexStorageMem3DMultisampleEXT = NULL;
PFNGLTEXSUBIMAGE2DPROC glad_glesTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE3DPROC glad_glesTexSubImage3D = NULL;
PFNGLTEXSUBIMAGE3DOESPROC glad_glesTexSubImage3DOES = NULL;
PFNGLTEXTUREATTACHMEMORYNVPROC glad_glesTextureAttachMemoryNV = NULL;
PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC glad_glesTextureFoveationParametersQCOM = NULL;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glad_glesTexturePageCommitmentMemNV = NULL;
PFNGLTEXTURESTORAGE1DEXTPROC glad_glesTextureStorage1DEXT = NULL;
PFNGLTEXTURESTORAGE2DEXTPROC glad_glesTextureStorage2DEXT = NULL;
PFNGLTEXTURESTORAGE3DEXTPROC glad_glesTextureStorage3DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DEXTPROC glad_glesTextureStorageMem2DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC glad_glesTextureStorageMem2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DEXTPROC glad_glesTextureStorageMem3DEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC glad_glesTextureStorageMem3DMultisampleEXT = NULL;
PFNGLTEXTUREVIEWEXTPROC glad_glesTextureViewEXT = NULL;
PFNGLTEXTUREVIEWOESPROC glad_glesTextureViewOES = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glad_glesTransformFeedbackVaryings = NULL;
PFNGLTRANSFORMPATHNVPROC glad_glesTransformPathNV = NULL;
PFNGLUNIFORM1FPROC glad_glesUniform1f = NULL;
PFNGLUNIFORM1FVPROC glad_glesUniform1fv = NULL;
PFNGLUNIFORM1IPROC glad_glesUniform1i = NULL;
PFNGLUNIFORM1I64NVPROC glad_glesUniform1i64NV = NULL;
PFNGLUNIFORM1I64VNVPROC glad_glesUniform1i64vNV = NULL;
PFNGLUNIFORM1IVPROC glad_glesUniform1iv = NULL;
PFNGLUNIFORM1UIPROC glad_glesUniform1ui = NULL;
PFNGLUNIFORM1UI64NVPROC glad_glesUniform1ui64NV = NULL;
PFNGLUNIFORM1UI64VNVPROC glad_glesUniform1ui64vNV = NULL;
PFNGLUNIFORM1UIVPROC glad_glesUniform1uiv = NULL;
PFNGLUNIFORM2FPROC glad_glesUniform2f = NULL;
PFNGLUNIFORM2FVPROC glad_glesUniform2fv = NULL;
PFNGLUNIFORM2IPROC glad_glesUniform2i = NULL;
PFNGLUNIFORM2I64NVPROC glad_glesUniform2i64NV = NULL;
PFNGLUNIFORM2I64VNVPROC glad_glesUniform2i64vNV = NULL;
PFNGLUNIFORM2IVPROC glad_glesUniform2iv = NULL;
PFNGLUNIFORM2UIPROC glad_glesUniform2ui = NULL;
PFNGLUNIFORM2UI64NVPROC glad_glesUniform2ui64NV = NULL;
PFNGLUNIFORM2UI64VNVPROC glad_glesUniform2ui64vNV = NULL;
PFNGLUNIFORM2UIVPROC glad_glesUniform2uiv = NULL;
PFNGLUNIFORM3FPROC glad_glesUniform3f = NULL;
PFNGLUNIFORM3FVPROC glad_glesUniform3fv = NULL;
PFNGLUNIFORM3IPROC glad_glesUniform3i = NULL;
PFNGLUNIFORM3I64NVPROC glad_glesUniform3i64NV = NULL;
PFNGLUNIFORM3I64VNVPROC glad_glesUniform3i64vNV = NULL;
PFNGLUNIFORM3IVPROC glad_glesUniform3iv = NULL;
PFNGLUNIFORM3UIPROC glad_glesUniform3ui = NULL;
PFNGLUNIFORM3UI64NVPROC glad_glesUniform3ui64NV = NULL;
PFNGLUNIFORM3UI64VNVPROC glad_glesUniform3ui64vNV = NULL;
PFNGLUNIFORM3UIVPROC glad_glesUniform3uiv = NULL;
PFNGLUNIFORM4FPROC glad_glesUniform4f = NULL;
PFNGLUNIFORM4FVPROC glad_glesUniform4fv = NULL;
PFNGLUNIFORM4IPROC glad_glesUniform4i = NULL;
PFNGLUNIFORM4I64NVPROC glad_glesUniform4i64NV = NULL;
PFNGLUNIFORM4I64VNVPROC glad_glesUniform4i64vNV = NULL;
PFNGLUNIFORM4IVPROC glad_glesUniform4iv = NULL;
PFNGLUNIFORM4UIPROC glad_glesUniform4ui = NULL;
PFNGLUNIFORM4UI64NVPROC glad_glesUniform4ui64NV = NULL;
PFNGLUNIFORM4UI64VNVPROC glad_glesUniform4ui64vNV = NULL;
PFNGLUNIFORM4UIVPROC glad_glesUniform4uiv = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glad_glesUniformBlockBinding = NULL;
PFNGLUNIFORMHANDLEUI64IMGPROC glad_glesUniformHandleui64IMG = NULL;
PFNGLUNIFORMHANDLEUI64NVPROC glad_glesUniformHandleui64NV = NULL;
PFNGLUNIFORMHANDLEUI64VIMGPROC glad_glesUniformHandleui64vIMG = NULL;
PFNGLUNIFORMHANDLEUI64VNVPROC glad_glesUniformHandleui64vNV = NULL;
PFNGLUNIFORMMATRIX2FVPROC glad_glesUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC glad_glesUniformMatrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X3FVNVPROC glad_glesUniformMatrix2x3fvNV = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glad_glesUniformMatrix2x4fv = NULL;
PFNGLUNIFORMMATRIX2X4FVNVPROC glad_glesUniformMatrix2x4fvNV = NULL;
PFNGLUNIFORMMATRIX3FVPROC glad_glesUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glad_glesUniformMatrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X2FVNVPROC glad_glesUniformMatrix3x2fvNV = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glad_glesUniformMatrix3x4fv = NULL;
PFNGLUNIFORMMATRIX3X4FVNVPROC glad_glesUniformMatrix3x4fvNV = NULL;
PFNGLUNIFORMMATRIX4FVPROC glad_glesUniformMatrix4fv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glad_glesUniformMatrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X2FVNVPROC glad_glesUniformMatrix4x2fvNV = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glad_glesUniformMatrix4x3fv = NULL;
PFNGLUNIFORMMATRIX4X3FVNVPROC glad_glesUniformMatrix4x3fvNV = NULL;
PFNGLUNMAPBUFFERPROC glad_glesUnmapBuffer = NULL;
PFNGLUNMAPBUFFEROESPROC glad_glesUnmapBufferOES = NULL;
PFNGLUSEPROGRAMPROC glad_glesUseProgram = NULL;
PFNGLUSEPROGRAMSTAGESPROC glad_glesUseProgramStages = NULL;
PFNGLUSEPROGRAMSTAGESEXTPROC glad_glesUseProgramStagesEXT = NULL;
PFNGLVALIDATEPROGRAMPROC glad_glesValidateProgram = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glad_glesValidateProgramPipeline = NULL;
PFNGLVALIDATEPROGRAMPIPELINEEXTPROC glad_glesValidateProgramPipelineEXT = NULL;
PFNGLVERTEXATTRIB1FPROC glad_glesVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC glad_glesVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB2FPROC glad_glesVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC glad_glesVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB3FPROC glad_glesVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC glad_glesVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB4FPROC glad_glesVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC glad_glesVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIBBINDINGPROC glad_glesVertexAttribBinding = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glad_glesVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBDIVISORANGLEPROC glad_glesVertexAttribDivisorANGLE = NULL;
PFNGLVERTEXATTRIBDIVISOREXTPROC glad_glesVertexAttribDivisorEXT = NULL;
PFNGLVERTEXATTRIBDIVISORNVPROC glad_glesVertexAttribDivisorNV = NULL;
PFNGLVERTEXATTRIBFORMATPROC glad_glesVertexAttribFormat = NULL;
PFNGLVERTEXATTRIBI4IPROC glad_glesVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI4IVPROC glad_glesVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI4UIPROC glad_glesVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glad_glesVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBIFORMATPROC glad_glesVertexAttribIFormat = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glad_glesVertexAttribIPointer = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glad_glesVertexAttribPointer = NULL;
PFNGLVERTEXBINDINGDIVISORPROC glad_glesVertexBindingDivisor = NULL;
PFNGLVIEWPORTPROC glad_glesViewport = NULL;
PFNGLVIEWPORTARRAYVNVPROC glad_glesViewportArrayvNV = NULL;
PFNGLVIEWPORTARRAYVOESPROC glad_glesViewportArrayvOES = NULL;
PFNGLVIEWPORTINDEXEDFNVPROC glad_glesViewportIndexedfNV = NULL;
PFNGLVIEWPORTINDEXEDFOESPROC glad_glesViewportIndexedfOES = NULL;
PFNGLVIEWPORTINDEXEDFVNVPROC glad_glesViewportIndexedfvNV = NULL;
PFNGLVIEWPORTINDEXEDFVOESPROC glad_glesViewportIndexedfvOES = NULL;
PFNGLVIEWPORTPOSITIONWSCALENVPROC glad_glesViewportPositionWScaleNV = NULL;
PFNGLVIEWPORTSWIZZLENVPROC glad_glesViewportSwizzleNV = NULL;
PFNGLWAITSEMAPHOREEXTPROC glad_glesWaitSemaphoreEXT = NULL;
PFNGLWAITSYNCPROC glad_glesWaitSync = NULL;
PFNGLWAITSYNCAPPLEPROC glad_glesWaitSyncAPPLE = NULL;
PFNGLWAITVKSEMAPHORENVPROC glad_glesWaitVkSemaphoreNV = NULL;
PFNGLWEIGHTPATHSNVPROC glad_glesWeightPathsNV = NULL;
PFNGLWINDOWRECTANGLESEXTPROC glad_glesWindowRectanglesEXT = NULL;


static void glad_gles_load_GL_ES_VERSION_2_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ES_VERSION_2_0) return;
    glad_glesActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    glad_glesAttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    glad_glesBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    glad_glesBindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    glad_glesBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glad_glesBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glad_glesBindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    glad_glesBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glad_glesBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    glad_glesBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    glad_glesBlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    glad_glesBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    glad_glesBufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    glad_glesBufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    glad_glesCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glad_glesClear = (PFNGLCLEARPROC) load(userptr, "glClear");
    glad_glesClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    glad_glesClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glad_glesClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    glad_glesColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    glad_glesCompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    glad_glesCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    glad_glesCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    glad_glesCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    glad_glesCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    glad_glesCreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    glad_glesCreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    glad_glesCullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    glad_glesDeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    glad_glesDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glad_glesDeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    glad_glesDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glad_glesDeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    glad_glesDeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    glad_glesDepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    glad_glesDepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    glad_glesDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glad_glesDetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    glad_glesDisable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    glad_glesDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    glad_glesDrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    glad_glesDrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    glad_glesEnable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    glad_glesEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    glad_glesFinish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    glad_glesFlush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    glad_glesFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glad_glesFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glad_glesFrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    glad_glesGenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    glad_glesGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glad_glesGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glad_glesGenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    glad_glesGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glad_glesGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    glad_glesGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    glad_glesGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    glad_glesGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    glad_glesGetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    glad_glesGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    glad_glesGetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    glad_glesGetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    glad_glesGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glad_glesGetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    glad_glesGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    glad_glesGetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    glad_glesGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glad_glesGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    glad_glesGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glad_glesGetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    glad_glesGetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    glad_glesGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    glad_glesGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    glad_glesGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    glad_glesGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    glad_glesGetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    glad_glesGetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    glad_glesGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    glad_glesGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    glad_glesGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    glad_glesHint = (PFNGLHINTPROC) load(userptr, "glHint");
    glad_glesIsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    glad_glesIsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    glad_glesIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glad_glesIsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    glad_glesIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glad_glesIsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    glad_glesIsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    glad_glesLineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    glad_glesLinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    glad_glesPixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    glad_glesPolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    glad_glesReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    glad_glesReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glad_glesRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glad_glesSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
    glad_glesScissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    glad_glesShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
    glad_glesShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    glad_glesStencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    glad_glesStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    glad_glesStencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    glad_glesStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    glad_glesStencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    glad_glesStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    glad_glesTexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    glad_glesTexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    glad_glesTexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    glad_glesTexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    glad_glesTexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    glad_glesTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
    glad_glesUniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    glad_glesUniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    glad_glesUniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    glad_glesUniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    glad_glesUniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    glad_glesUniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    glad_glesUniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    glad_glesUniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    glad_glesUniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    glad_glesUniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    glad_glesUniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    glad_glesUniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    glad_glesUniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    glad_glesUniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    glad_glesUniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    glad_glesUniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    glad_glesUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    glad_glesUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    glad_glesUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    glad_glesUseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    glad_glesValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    glad_glesVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    glad_glesVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    glad_glesVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    glad_glesVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    glad_glesVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    glad_glesVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    glad_glesVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    glad_glesVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    glad_glesVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
    glad_glesViewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}
static void glad_gles_load_GL_ES_VERSION_3_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ES_VERSION_3_0) return;
    glad_glesBeginQuery = (PFNGLBEGINQUERYPROC) load(userptr, "glBeginQuery");
    glad_glesBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) load(userptr, "glBeginTransformFeedback");
    glad_glesBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glad_glesBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glad_glesBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glad_glesBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) load(userptr, "glBindTransformFeedback");
    glad_glesBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glad_glesBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glad_glesClearBufferfi = (PFNGLCLEARBUFFERFIPROC) load(userptr, "glClearBufferfi");
    glad_glesClearBufferfv = (PFNGLCLEARBUFFERFVPROC) load(userptr, "glClearBufferfv");
    glad_glesClearBufferiv = (PFNGLCLEARBUFFERIVPROC) load(userptr, "glClearBufferiv");
    glad_glesClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) load(userptr, "glClearBufferuiv");
    glad_glesClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glad_glesCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) load(userptr, "glCompressedTexImage3D");
    glad_glesCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) load(userptr, "glCompressedTexSubImage3D");
    glad_glesCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
    glad_glesCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) load(userptr, "glCopyTexSubImage3D");
    glad_glesDeleteQueries = (PFNGLDELETEQUERIESPROC) load(userptr, "glDeleteQueries");
    glad_glesDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glad_glesDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glad_glesDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) load(userptr, "glDeleteTransformFeedbacks");
    glad_glesDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glad_glesDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) load(userptr, "glDrawArraysInstanced");
    glad_glesDrawBuffers = (PFNGLDRAWBUFFERSPROC) load(userptr, "glDrawBuffers");
    glad_glesDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) load(userptr, "glDrawElementsInstanced");
    glad_glesDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) load(userptr, "glDrawRangeElements");
    glad_glesEndQuery = (PFNGLENDQUERYPROC) load(userptr, "glEndQuery");
    glad_glesEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) load(userptr, "glEndTransformFeedback");
    glad_glesFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glad_glesFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glad_glesFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glad_glesGenQueries = (PFNGLGENQUERIESPROC) load(userptr, "glGenQueries");
    glad_glesGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glad_glesGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) load(userptr, "glGenTransformFeedbacks");
    glad_glesGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glad_glesGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glad_glesGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glad_glesGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glad_glesGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) load(userptr, "glGetBufferParameteri64v");
    glad_glesGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) load(userptr, "glGetBufferPointerv");
    glad_glesGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) load(userptr, "glGetFragDataLocation");
    glad_glesGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) load(userptr, "glGetInteger64i_v");
    glad_glesGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glad_glesGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glad_glesGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) load(userptr, "glGetInternalformativ");
    glad_glesGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) load(userptr, "glGetProgramBinary");
    glad_glesGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) load(userptr, "glGetQueryObjectuiv");
    glad_glesGetQueryiv = (PFNGLGETQUERYIVPROC) load(userptr, "glGetQueryiv");
    glad_glesGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glad_glesGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glad_glesGetStringi = (PFNGLGETSTRINGIPROC) load(userptr, "glGetStringi");
    glad_glesGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glad_glesGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) load(userptr, "glGetTransformFeedbackVarying");
    glad_glesGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glad_glesGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glad_glesGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) load(userptr, "glGetUniformuiv");
    glad_glesGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) load(userptr, "glGetVertexAttribIiv");
    glad_glesGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) load(userptr, "glGetVertexAttribIuiv");
    glad_glesInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) load(userptr, "glInvalidateFramebuffer");
    glad_glesInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) load(userptr, "glInvalidateSubFramebuffer");
    glad_glesIsQuery = (PFNGLISQUERYPROC) load(userptr, "glIsQuery");
    glad_glesIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glad_glesIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glad_glesIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) load(userptr, "glIsTransformFeedback");
    glad_glesIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
    glad_glesMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
    glad_glesPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) load(userptr, "glPauseTransformFeedback");
    glad_glesProgramBinary = (PFNGLPROGRAMBINARYPROC) load(userptr, "glProgramBinary");
    glad_glesProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
    glad_glesReadBuffer = (PFNGLREADBUFFERPROC) load(userptr, "glReadBuffer");
    glad_glesRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
    glad_glesResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) load(userptr, "glResumeTransformFeedback");
    glad_glesSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glad_glesSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glad_glesSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glad_glesSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
    glad_glesTexImage3D = (PFNGLTEXIMAGE3DPROC) load(userptr, "glTexImage3D");
    glad_glesTexStorage2D = (PFNGLTEXSTORAGE2DPROC) load(userptr, "glTexStorage2D");
    glad_glesTexStorage3D = (PFNGLTEXSTORAGE3DPROC) load(userptr, "glTexStorage3D");
    glad_glesTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) load(userptr, "glTexSubImage3D");
    glad_glesTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) load(userptr, "glTransformFeedbackVaryings");
    glad_glesUniform1ui = (PFNGLUNIFORM1UIPROC) load(userptr, "glUniform1ui");
    glad_glesUniform1uiv = (PFNGLUNIFORM1UIVPROC) load(userptr, "glUniform1uiv");
    glad_glesUniform2ui = (PFNGLUNIFORM2UIPROC) load(userptr, "glUniform2ui");
    glad_glesUniform2uiv = (PFNGLUNIFORM2UIVPROC) load(userptr, "glUniform2uiv");
    glad_glesUniform3ui = (PFNGLUNIFORM3UIPROC) load(userptr, "glUniform3ui");
    glad_glesUniform3uiv = (PFNGLUNIFORM3UIVPROC) load(userptr, "glUniform3uiv");
    glad_glesUniform4ui = (PFNGLUNIFORM4UIPROC) load(userptr, "glUniform4ui");
    glad_glesUniform4uiv = (PFNGLUNIFORM4UIVPROC) load(userptr, "glUniform4uiv");
    glad_glesUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
    glad_glesUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) load(userptr, "glUniformMatrix2x3fv");
    glad_glesUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) load(userptr, "glUniformMatrix2x4fv");
    glad_glesUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) load(userptr, "glUniformMatrix3x2fv");
    glad_glesUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) load(userptr, "glUniformMatrix3x4fv");
    glad_glesUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) load(userptr, "glUniformMatrix4x2fv");
    glad_glesUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) load(userptr, "glUniformMatrix4x3fv");
    glad_glesUnmapBuffer = (PFNGLUNMAPBUFFERPROC) load(userptr, "glUnmapBuffer");
    glad_glesVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) load(userptr, "glVertexAttribDivisor");
    glad_glesVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) load(userptr, "glVertexAttribI4i");
    glad_glesVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) load(userptr, "glVertexAttribI4iv");
    glad_glesVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) load(userptr, "glVertexAttribI4ui");
    glad_glesVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) load(userptr, "glVertexAttribI4uiv");
    glad_glesVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) load(userptr, "glVertexAttribIPointer");
    glad_glesWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}
static void glad_gles_load_GL_ES_VERSION_3_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ES_VERSION_3_1) return;
    glad_glesActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) load(userptr, "glActiveShaderProgram");
    glad_glesBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) load(userptr, "glBindImageTexture");
    glad_glesBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) load(userptr, "glBindProgramPipeline");
    glad_glesBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) load(userptr, "glBindVertexBuffer");
    glad_glesCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) load(userptr, "glCreateShaderProgramv");
    glad_glesDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) load(userptr, "glDeleteProgramPipelines");
    glad_glesDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) load(userptr, "glDispatchCompute");
    glad_glesDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) load(userptr, "glDispatchComputeIndirect");
    glad_glesDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) load(userptr, "glDrawArraysIndirect");
    glad_glesDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) load(userptr, "glDrawElementsIndirect");
    glad_glesFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) load(userptr, "glFramebufferParameteri");
    glad_glesGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) load(userptr, "glGenProgramPipelines");
    glad_glesGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) load(userptr, "glGetBooleani_v");
    glad_glesGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetFramebufferParameteriv");
    glad_glesGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) load(userptr, "glGetMultisamplefv");
    glad_glesGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) load(userptr, "glGetProgramInterfaceiv");
    glad_glesGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) load(userptr, "glGetProgramPipelineInfoLog");
    glad_glesGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) load(userptr, "glGetProgramPipelineiv");
    glad_glesGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) load(userptr, "glGetProgramResourceIndex");
    glad_glesGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) load(userptr, "glGetProgramResourceLocation");
    glad_glesGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) load(userptr, "glGetProgramResourceName");
    glad_glesGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) load(userptr, "glGetProgramResourceiv");
    glad_glesGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) load(userptr, "glGetTexLevelParameterfv");
    glad_glesGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) load(userptr, "glGetTexLevelParameteriv");
    glad_glesIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) load(userptr, "glIsProgramPipeline");
    glad_glesMemoryBarrier = (PFNGLMEMORYBARRIERPROC) load(userptr, "glMemoryBarrier");
    glad_glesMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) load(userptr, "glMemoryBarrierByRegion");
    glad_glesProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) load(userptr, "glProgramUniform1f");
    glad_glesProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) load(userptr, "glProgramUniform1fv");
    glad_glesProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) load(userptr, "glProgramUniform1i");
    glad_glesProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) load(userptr, "glProgramUniform1iv");
    glad_glesProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) load(userptr, "glProgramUniform1ui");
    glad_glesProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) load(userptr, "glProgramUniform1uiv");
    glad_glesProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) load(userptr, "glProgramUniform2f");
    glad_glesProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) load(userptr, "glProgramUniform2fv");
    glad_glesProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) load(userptr, "glProgramUniform2i");
    glad_glesProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) load(userptr, "glProgramUniform2iv");
    glad_glesProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) load(userptr, "glProgramUniform2ui");
    glad_glesProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) load(userptr, "glProgramUniform2uiv");
    glad_glesProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) load(userptr, "glProgramUniform3f");
    glad_glesProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) load(userptr, "glProgramUniform3fv");
    glad_glesProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) load(userptr, "glProgramUniform3i");
    glad_glesProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) load(userptr, "glProgramUniform3iv");
    glad_glesProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) load(userptr, "glProgramUniform3ui");
    glad_glesProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) load(userptr, "glProgramUniform3uiv");
    glad_glesProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) load(userptr, "glProgramUniform4f");
    glad_glesProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) load(userptr, "glProgramUniform4fv");
    glad_glesProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) load(userptr, "glProgramUniform4i");
    glad_glesProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) load(userptr, "glProgramUniform4iv");
    glad_glesProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) load(userptr, "glProgramUniform4ui");
    glad_glesProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) load(userptr, "glProgramUniform4uiv");
    glad_glesProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) load(userptr, "glProgramUniformMatrix2fv");
    glad_glesProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) load(userptr, "glProgramUniformMatrix2x3fv");
    glad_glesProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) load(userptr, "glProgramUniformMatrix2x4fv");
    glad_glesProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) load(userptr, "glProgramUniformMatrix3fv");
    glad_glesProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) load(userptr, "glProgramUniformMatrix3x2fv");
    glad_glesProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) load(userptr, "glProgramUniformMatrix3x4fv");
    glad_glesProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) load(userptr, "glProgramUniformMatrix4fv");
    glad_glesProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) load(userptr, "glProgramUniformMatrix4x2fv");
    glad_glesProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) load(userptr, "glProgramUniformMatrix4x3fv");
    glad_glesSampleMaski = (PFNGLSAMPLEMASKIPROC) load(userptr, "glSampleMaski");
    glad_glesTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) load(userptr, "glTexStorage2DMultisample");
    glad_glesUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) load(userptr, "glUseProgramStages");
    glad_glesValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) load(userptr, "glValidateProgramPipeline");
    glad_glesVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) load(userptr, "glVertexAttribBinding");
    glad_glesVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) load(userptr, "glVertexAttribFormat");
    glad_glesVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) load(userptr, "glVertexAttribIFormat");
    glad_glesVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) load(userptr, "glVertexBindingDivisor");
}
static void glad_gles_load_GL_ES_VERSION_3_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ES_VERSION_3_2) return;
    glad_glesBlendBarrier = (PFNGLBLENDBARRIERPROC) load(userptr, "glBlendBarrier");
    glad_glesBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) load(userptr, "glBlendEquationSeparatei");
    glad_glesBlendEquationi = (PFNGLBLENDEQUATIONIPROC) load(userptr, "glBlendEquationi");
    glad_glesBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) load(userptr, "glBlendFuncSeparatei");
    glad_glesBlendFunci = (PFNGLBLENDFUNCIPROC) load(userptr, "glBlendFunci");
    glad_glesColorMaski = (PFNGLCOLORMASKIPROC) load(userptr, "glColorMaski");
    glad_glesCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) load(userptr, "glCopyImageSubData");
    glad_glesDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) load(userptr, "glDebugMessageCallback");
    glad_glesDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) load(userptr, "glDebugMessageControl");
    glad_glesDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) load(userptr, "glDebugMessageInsert");
    glad_glesDisablei = (PFNGLDISABLEIPROC) load(userptr, "glDisablei");
    glad_glesDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glDrawElementsBaseVertex");
    glad_glesDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) load(userptr, "glDrawElementsInstancedBaseVertex");
    glad_glesDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) load(userptr, "glDrawRangeElementsBaseVertex");
    glad_glesEnablei = (PFNGLENABLEIPROC) load(userptr, "glEnablei");
    glad_glesFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) load(userptr, "glFramebufferTexture");
    glad_glesGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) load(userptr, "glGetDebugMessageLog");
    glad_glesGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) load(userptr, "glGetGraphicsResetStatus");
    glad_glesGetObjectLabel = (PFNGLGETOBJECTLABELPROC) load(userptr, "glGetObjectLabel");
    glad_glesGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) load(userptr, "glGetObjectPtrLabel");
    glad_glesGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glad_glesGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) load(userptr, "glGetSamplerParameterIiv");
    glad_glesGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) load(userptr, "glGetSamplerParameterIuiv");
    glad_glesGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) load(userptr, "glGetTexParameterIiv");
    glad_glesGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) load(userptr, "glGetTexParameterIuiv");
    glad_glesGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) load(userptr, "glGetnUniformfv");
    glad_glesGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) load(userptr, "glGetnUniformiv");
    glad_glesGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) load(userptr, "glGetnUniformuiv");
    glad_glesIsEnabledi = (PFNGLISENABLEDIPROC) load(userptr, "glIsEnabledi");
    glad_glesMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) load(userptr, "glMinSampleShading");
    glad_glesObjectLabel = (PFNGLOBJECTLABELPROC) load(userptr, "glObjectLabel");
    glad_glesObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) load(userptr, "glObjectPtrLabel");
    glad_glesPatchParameteri = (PFNGLPATCHPARAMETERIPROC) load(userptr, "glPatchParameteri");
    glad_glesPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) load(userptr, "glPopDebugGroup");
    glad_glesPrimitiveBoundingBox = (PFNGLPRIMITIVEBOUNDINGBOXPROC) load(userptr, "glPrimitiveBoundingBox");
    glad_glesPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) load(userptr, "glPushDebugGroup");
    glad_glesReadnPixels = (PFNGLREADNPIXELSPROC) load(userptr, "glReadnPixels");
    glad_glesSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) load(userptr, "glSamplerParameterIiv");
    glad_glesSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) load(userptr, "glSamplerParameterIuiv");
    glad_glesTexBuffer = (PFNGLTEXBUFFERPROC) load(userptr, "glTexBuffer");
    glad_glesTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) load(userptr, "glTexBufferRange");
    glad_glesTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) load(userptr, "glTexParameterIiv");
    glad_glesTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) load(userptr, "glTexParameterIuiv");
    glad_glesTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) load(userptr, "glTexStorage3DMultisample");
}
static void glad_gles_load_GL_AMD_framebuffer_multisample_advanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_AMD_framebuffer_multisample_advanced) return;
    glad_glesNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) load(userptr, "glNamedRenderbufferStorageMultisampleAdvancedAMD");
    glad_glesRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) load(userptr, "glRenderbufferStorageMultisampleAdvancedAMD");
}
static void glad_gles_load_GL_AMD_performance_monitor( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_AMD_performance_monitor) return;
    glad_glesBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC) load(userptr, "glBeginPerfMonitorAMD");
    glad_glesDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC) load(userptr, "glDeletePerfMonitorsAMD");
    glad_glesEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC) load(userptr, "glEndPerfMonitorAMD");
    glad_glesGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC) load(userptr, "glGenPerfMonitorsAMD");
    glad_glesGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) load(userptr, "glGetPerfMonitorCounterDataAMD");
    glad_glesGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) load(userptr, "glGetPerfMonitorCounterInfoAMD");
    glad_glesGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) load(userptr, "glGetPerfMonitorCounterStringAMD");
    glad_glesGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) load(userptr, "glGetPerfMonitorCountersAMD");
    glad_glesGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) load(userptr, "glGetPerfMonitorGroupStringAMD");
    glad_glesGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC) load(userptr, "glGetPerfMonitorGroupsAMD");
    glad_glesSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) load(userptr, "glSelectPerfMonitorCountersAMD");
}
static void glad_gles_load_GL_ANGLE_framebuffer_blit( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ANGLE_framebuffer_blit) return;
    glad_glesBlitFramebufferANGLE = (PFNGLBLITFRAMEBUFFERANGLEPROC) load(userptr, "glBlitFramebufferANGLE");
}
static void glad_gles_load_GL_ANGLE_framebuffer_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ANGLE_framebuffer_multisample) return;
    glad_glesRenderbufferStorageMultisampleANGLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) load(userptr, "glRenderbufferStorageMultisampleANGLE");
}
static void glad_gles_load_GL_ANGLE_instanced_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ANGLE_instanced_arrays) return;
    glad_glesDrawArraysInstancedANGLE = (PFNGLDRAWARRAYSINSTANCEDANGLEPROC) load(userptr, "glDrawArraysInstancedANGLE");
    glad_glesDrawElementsInstancedANGLE = (PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) load(userptr, "glDrawElementsInstancedANGLE");
    glad_glesVertexAttribDivisorANGLE = (PFNGLVERTEXATTRIBDIVISORANGLEPROC) load(userptr, "glVertexAttribDivisorANGLE");
}
static void glad_gles_load_GL_ANGLE_translated_shader_source( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_ANGLE_translated_shader_source) return;
    glad_glesGetTranslatedShaderSourceANGLE = (PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) load(userptr, "glGetTranslatedShaderSourceANGLE");
}
static void glad_gles_load_GL_APPLE_copy_texture_levels( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_APPLE_copy_texture_levels) return;
    glad_glesCopyTextureLevelsAPPLE = (PFNGLCOPYTEXTURELEVELSAPPLEPROC) load(userptr, "glCopyTextureLevelsAPPLE");
}
static void glad_gles_load_GL_APPLE_framebuffer_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_APPLE_framebuffer_multisample) return;
    glad_glesRenderbufferStorageMultisampleAPPLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) load(userptr, "glRenderbufferStorageMultisampleAPPLE");
    glad_glesResolveMultisampleFramebufferAPPLE = (PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) load(userptr, "glResolveMultisampleFramebufferAPPLE");
}
static void glad_gles_load_GL_APPLE_sync( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_APPLE_sync) return;
    glad_glesClientWaitSyncAPPLE = (PFNGLCLIENTWAITSYNCAPPLEPROC) load(userptr, "glClientWaitSyncAPPLE");
    glad_glesDeleteSyncAPPLE = (PFNGLDELETESYNCAPPLEPROC) load(userptr, "glDeleteSyncAPPLE");
    glad_glesFenceSyncAPPLE = (PFNGLFENCESYNCAPPLEPROC) load(userptr, "glFenceSyncAPPLE");
    glad_glesGetInteger64vAPPLE = (PFNGLGETINTEGER64VAPPLEPROC) load(userptr, "glGetInteger64vAPPLE");
    glad_glesGetSyncivAPPLE = (PFNGLGETSYNCIVAPPLEPROC) load(userptr, "glGetSyncivAPPLE");
    glad_glesIsSyncAPPLE = (PFNGLISSYNCAPPLEPROC) load(userptr, "glIsSyncAPPLE");
    glad_glesWaitSyncAPPLE = (PFNGLWAITSYNCAPPLEPROC) load(userptr, "glWaitSyncAPPLE");
}
static void glad_gles_load_GL_EXT_EGL_image_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_EGL_image_storage) return;
    glad_glesEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) load(userptr, "glEGLImageTargetTexStorageEXT");
    glad_glesEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) load(userptr, "glEGLImageTargetTextureStorageEXT");
}
static void glad_gles_load_GL_EXT_base_instance( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_base_instance) return;
    glad_glesDrawArraysInstancedBaseInstanceEXT = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) load(userptr, "glDrawArraysInstancedBaseInstanceEXT");
    glad_glesDrawElementsInstancedBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) load(userptr, "glDrawElementsInstancedBaseInstanceEXT");
    glad_glesDrawElementsInstancedBaseVertexBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) load(userptr, "glDrawElementsInstancedBaseVertexBaseInstanceEXT");
}
static void glad_gles_load_GL_EXT_blend_func_extended( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_blend_func_extended) return;
    glad_glesBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) load(userptr, "glBindFragDataLocationEXT");
    glad_glesBindFragDataLocationIndexedEXT = (PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) load(userptr, "glBindFragDataLocationIndexedEXT");
    glad_glesGetFragDataIndexEXT = (PFNGLGETFRAGDATAINDEXEXTPROC) load(userptr, "glGetFragDataIndexEXT");
    glad_glesGetProgramResourceLocationIndexEXT = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) load(userptr, "glGetProgramResourceLocationIndexEXT");
}
static void glad_gles_load_GL_EXT_buffer_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_buffer_storage) return;
    glad_glesBufferStorageEXT = (PFNGLBUFFERSTORAGEEXTPROC) load(userptr, "glBufferStorageEXT");
}
static void glad_gles_load_GL_EXT_clear_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_clear_texture) return;
    glad_glesClearTexImageEXT = (PFNGLCLEARTEXIMAGEEXTPROC) load(userptr, "glClearTexImageEXT");
    glad_glesClearTexSubImageEXT = (PFNGLCLEARTEXSUBIMAGEEXTPROC) load(userptr, "glClearTexSubImageEXT");
}
static void glad_gles_load_GL_EXT_clip_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_clip_control) return;
    glad_glesClipControlEXT = (PFNGLCLIPCONTROLEXTPROC) load(userptr, "glClipControlEXT");
}
static void glad_gles_load_GL_EXT_copy_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_copy_image) return;
    glad_glesCopyImageSubDataEXT = (PFNGLCOPYIMAGESUBDATAEXTPROC) load(userptr, "glCopyImageSubDataEXT");
}
static void glad_gles_load_GL_EXT_debug_label( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_debug_label) return;
    glad_glesGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) load(userptr, "glGetObjectLabelEXT");
    glad_glesLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) load(userptr, "glLabelObjectEXT");
}
static void glad_gles_load_GL_EXT_debug_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_debug_marker) return;
    glad_glesInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) load(userptr, "glInsertEventMarkerEXT");
    glad_glesPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) load(userptr, "glPopGroupMarkerEXT");
    glad_glesPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) load(userptr, "glPushGroupMarkerEXT");
}
static void glad_gles_load_GL_EXT_discard_framebuffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_discard_framebuffer) return;
    glad_glesDiscardFramebufferEXT = (PFNGLDISCARDFRAMEBUFFEREXTPROC) load(userptr, "glDiscardFramebufferEXT");
}
static void glad_gles_load_GL_EXT_disjoint_timer_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_disjoint_timer_query) return;
    glad_glesBeginQueryEXT = (PFNGLBEGINQUERYEXTPROC) load(userptr, "glBeginQueryEXT");
    glad_glesDeleteQueriesEXT = (PFNGLDELETEQUERIESEXTPROC) load(userptr, "glDeleteQueriesEXT");
    glad_glesEndQueryEXT = (PFNGLENDQUERYEXTPROC) load(userptr, "glEndQueryEXT");
    glad_glesGenQueriesEXT = (PFNGLGENQUERIESEXTPROC) load(userptr, "glGenQueriesEXT");
    glad_glesGetInteger64vEXT = (PFNGLGETINTEGER64VEXTPROC) load(userptr, "glGetInteger64vEXT");
    glad_glesGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) load(userptr, "glGetQueryObjecti64vEXT");
    glad_glesGetQueryObjectivEXT = (PFNGLGETQUERYOBJECTIVEXTPROC) load(userptr, "glGetQueryObjectivEXT");
    glad_glesGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) load(userptr, "glGetQueryObjectui64vEXT");
    glad_glesGetQueryObjectuivEXT = (PFNGLGETQUERYOBJECTUIVEXTPROC) load(userptr, "glGetQueryObjectuivEXT");
    glad_glesGetQueryivEXT = (PFNGLGETQUERYIVEXTPROC) load(userptr, "glGetQueryivEXT");
    glad_glesIsQueryEXT = (PFNGLISQUERYEXTPROC) load(userptr, "glIsQueryEXT");
    glad_glesQueryCounterEXT = (PFNGLQUERYCOUNTEREXTPROC) load(userptr, "glQueryCounterEXT");
}
static void glad_gles_load_GL_EXT_draw_buffers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_draw_buffers) return;
    glad_glesDrawBuffersEXT = (PFNGLDRAWBUFFERSEXTPROC) load(userptr, "glDrawBuffersEXT");
}
static void glad_gles_load_GL_EXT_draw_buffers_indexed( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_draw_buffers_indexed) return;
    glad_glesBlendEquationSeparateiEXT = (PFNGLBLENDEQUATIONSEPARATEIEXTPROC) load(userptr, "glBlendEquationSeparateiEXT");
    glad_glesBlendEquationiEXT = (PFNGLBLENDEQUATIONIEXTPROC) load(userptr, "glBlendEquationiEXT");
    glad_glesBlendFuncSeparateiEXT = (PFNGLBLENDFUNCSEPARATEIEXTPROC) load(userptr, "glBlendFuncSeparateiEXT");
    glad_glesBlendFunciEXT = (PFNGLBLENDFUNCIEXTPROC) load(userptr, "glBlendFunciEXT");
    glad_glesColorMaskiEXT = (PFNGLCOLORMASKIEXTPROC) load(userptr, "glColorMaskiEXT");
    glad_glesDisableiEXT = (PFNGLDISABLEIEXTPROC) load(userptr, "glDisableiEXT");
    glad_glesEnableiEXT = (PFNGLENABLEIEXTPROC) load(userptr, "glEnableiEXT");
    glad_glesIsEnablediEXT = (PFNGLISENABLEDIEXTPROC) load(userptr, "glIsEnablediEXT");
}
static void glad_gles_load_GL_EXT_draw_elements_base_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_draw_elements_base_vertex) return;
    glad_glesDrawElementsBaseVertexEXT = (PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) load(userptr, "glDrawElementsBaseVertexEXT");
    glad_glesDrawElementsInstancedBaseVertexEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) load(userptr, "glDrawElementsInstancedBaseVertexEXT");
    glad_glesDrawRangeElementsBaseVertexEXT = (PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) load(userptr, "glDrawRangeElementsBaseVertexEXT");
    glad_glesMultiDrawElementsBaseVertexEXT = (PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) load(userptr, "glMultiDrawElementsBaseVertexEXT");
}
static void glad_gles_load_GL_EXT_draw_instanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_draw_instanced) return;
    glad_glesDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) load(userptr, "glDrawArraysInstancedEXT");
    glad_glesDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) load(userptr, "glDrawElementsInstancedEXT");
}
static void glad_gles_load_GL_EXT_draw_transform_feedback( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_draw_transform_feedback) return;
    glad_glesDrawTransformFeedbackEXT = (PFNGLDRAWTRANSFORMFEEDBACKEXTPROC) load(userptr, "glDrawTransformFeedbackEXT");
    glad_glesDrawTransformFeedbackInstancedEXT = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC) load(userptr, "glDrawTransformFeedbackInstancedEXT");
}
static void glad_gles_load_GL_EXT_external_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_external_buffer) return;
    glad_glesBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glBufferStorageExternalEXT");
    glad_glesNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glNamedBufferStorageExternalEXT");
}
static void glad_gles_load_GL_EXT_fragment_shading_rate( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_fragment_shading_rate) return;
    glad_glesFramebufferShadingRateEXT = (PFNGLFRAMEBUFFERSHADINGRATEEXTPROC) load(userptr, "glFramebufferShadingRateEXT");
    glad_glesGetFragmentShadingRatesEXT = (PFNGLGETFRAGMENTSHADINGRATESEXTPROC) load(userptr, "glGetFragmentShadingRatesEXT");
    glad_glesShadingRateCombinerOpsEXT = (PFNGLSHADINGRATECOMBINEROPSEXTPROC) load(userptr, "glShadingRateCombinerOpsEXT");
    glad_glesShadingRateEXT = (PFNGLSHADINGRATEEXTPROC) load(userptr, "glShadingRateEXT");
}
static void glad_gles_load_GL_EXT_geometry_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_geometry_shader) return;
    glad_glesFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC) load(userptr, "glFramebufferTextureEXT");
}
static void glad_gles_load_GL_EXT_instanced_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_instanced_arrays) return;
    glad_glesDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) load(userptr, "glDrawArraysInstancedEXT");
    glad_glesDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) load(userptr, "glDrawElementsInstancedEXT");
    glad_glesVertexAttribDivisorEXT = (PFNGLVERTEXATTRIBDIVISOREXTPROC) load(userptr, "glVertexAttribDivisorEXT");
}
static void glad_gles_load_GL_EXT_map_buffer_range( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_map_buffer_range) return;
    glad_glesFlushMappedBufferRangeEXT = (PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) load(userptr, "glFlushMappedBufferRangeEXT");
    glad_glesMapBufferRangeEXT = (PFNGLMAPBUFFERRANGEEXTPROC) load(userptr, "glMapBufferRangeEXT");
}
static void glad_gles_load_GL_EXT_memory_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_memory_object) return;
    glad_glesBufferStorageMemEXT = (PFNGLBUFFERSTORAGEMEMEXTPROC) load(userptr, "glBufferStorageMemEXT");
    glad_glesCreateMemoryObjectsEXT = (PFNGLCREATEMEMORYOBJECTSEXTPROC) load(userptr, "glCreateMemoryObjectsEXT");
    glad_glesDeleteMemoryObjectsEXT = (PFNGLDELETEMEMORYOBJECTSEXTPROC) load(userptr, "glDeleteMemoryObjectsEXT");
    glad_glesGetMemoryObjectParameterivEXT = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glGetMemoryObjectParameterivEXT");
    glad_glesGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glad_glesGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glad_glesIsMemoryObjectEXT = (PFNGLISMEMORYOBJECTEXTPROC) load(userptr, "glIsMemoryObjectEXT");
    glad_glesMemoryObjectParameterivEXT = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glMemoryObjectParameterivEXT");
    glad_glesNamedBufferStorageMemEXT = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) load(userptr, "glNamedBufferStorageMemEXT");
    glad_glesTexStorageMem2DEXT = (PFNGLTEXSTORAGEMEM2DEXTPROC) load(userptr, "glTexStorageMem2DEXT");
    glad_glesTexStorageMem2DMultisampleEXT = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem2DMultisampleEXT");
    glad_glesTexStorageMem3DEXT = (PFNGLTEXSTORAGEMEM3DEXTPROC) load(userptr, "glTexStorageMem3DEXT");
    glad_glesTexStorageMem3DMultisampleEXT = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem3DMultisampleEXT");
    glad_glesTextureStorageMem2DEXT = (PFNGLTEXTURESTORAGEMEM2DEXTPROC) load(userptr, "glTextureStorageMem2DEXT");
    glad_glesTextureStorageMem2DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem2DMultisampleEXT");
    glad_glesTextureStorageMem3DEXT = (PFNGLTEXTURESTORAGEMEM3DEXTPROC) load(userptr, "glTextureStorageMem3DEXT");
    glad_glesTextureStorageMem3DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem3DMultisampleEXT");
}
static void glad_gles_load_GL_EXT_memory_object_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_memory_object_fd) return;
    glad_glesImportMemoryFdEXT = (PFNGLIMPORTMEMORYFDEXTPROC) load(userptr, "glImportMemoryFdEXT");
}
static void glad_gles_load_GL_EXT_memory_object_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_memory_object_win32) return;
    glad_glesImportMemoryWin32HandleEXT = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) load(userptr, "glImportMemoryWin32HandleEXT");
    glad_glesImportMemoryWin32NameEXT = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) load(userptr, "glImportMemoryWin32NameEXT");
}
static void glad_gles_load_GL_EXT_multi_draw_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_multi_draw_arrays) return;
    glad_glesMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC) load(userptr, "glMultiDrawArraysEXT");
    glad_glesMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC) load(userptr, "glMultiDrawElementsEXT");
}
static void glad_gles_load_GL_EXT_multi_draw_indirect( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_multi_draw_indirect) return;
    glad_glesMultiDrawArraysIndirectEXT = (PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) load(userptr, "glMultiDrawArraysIndirectEXT");
    glad_glesMultiDrawElementsIndirectEXT = (PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) load(userptr, "glMultiDrawElementsIndirectEXT");
}
static void glad_gles_load_GL_EXT_multisampled_render_to_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_multisampled_render_to_texture) return;
    glad_glesFramebufferTexture2DMultisampleEXT = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) load(userptr, "glFramebufferTexture2DMultisampleEXT");
    glad_glesRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) load(userptr, "glRenderbufferStorageMultisampleEXT");
}
static void glad_gles_load_GL_EXT_multiview_draw_buffers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_multiview_draw_buffers) return;
    glad_glesDrawBuffersIndexedEXT = (PFNGLDRAWBUFFERSINDEXEDEXTPROC) load(userptr, "glDrawBuffersIndexedEXT");
    glad_glesGetIntegeri_vEXT = (PFNGLGETINTEGERI_VEXTPROC) load(userptr, "glGetIntegeri_vEXT");
    glad_glesReadBufferIndexedEXT = (PFNGLREADBUFFERINDEXEDEXTPROC) load(userptr, "glReadBufferIndexedEXT");
}
static void glad_gles_load_GL_EXT_occlusion_query_boolean( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_occlusion_query_boolean) return;
    glad_glesBeginQueryEXT = (PFNGLBEGINQUERYEXTPROC) load(userptr, "glBeginQueryEXT");
    glad_glesDeleteQueriesEXT = (PFNGLDELETEQUERIESEXTPROC) load(userptr, "glDeleteQueriesEXT");
    glad_glesEndQueryEXT = (PFNGLENDQUERYEXTPROC) load(userptr, "glEndQueryEXT");
    glad_glesGenQueriesEXT = (PFNGLGENQUERIESEXTPROC) load(userptr, "glGenQueriesEXT");
    glad_glesGetQueryObjectuivEXT = (PFNGLGETQUERYOBJECTUIVEXTPROC) load(userptr, "glGetQueryObjectuivEXT");
    glad_glesGetQueryivEXT = (PFNGLGETQUERYIVEXTPROC) load(userptr, "glGetQueryivEXT");
    glad_glesIsQueryEXT = (PFNGLISQUERYEXTPROC) load(userptr, "glIsQueryEXT");
}
static void glad_gles_load_GL_EXT_polygon_offset_clamp( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_polygon_offset_clamp) return;
    glad_glesPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) load(userptr, "glPolygonOffsetClampEXT");
}
static void glad_gles_load_GL_EXT_primitive_bounding_box( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_primitive_bounding_box) return;
    glad_glesPrimitiveBoundingBoxEXT = (PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) load(userptr, "glPrimitiveBoundingBoxEXT");
}
static void glad_gles_load_GL_EXT_raster_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_raster_multisample) return;
    glad_glesRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) load(userptr, "glRasterSamplesEXT");
}
static void glad_gles_load_GL_EXT_robustness( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_robustness) return;
    glad_glesGetGraphicsResetStatusEXT = (PFNGLGETGRAPHICSRESETSTATUSEXTPROC) load(userptr, "glGetGraphicsResetStatusEXT");
    glad_glesGetnUniformfvEXT = (PFNGLGETNUNIFORMFVEXTPROC) load(userptr, "glGetnUniformfvEXT");
    glad_glesGetnUniformivEXT = (PFNGLGETNUNIFORMIVEXTPROC) load(userptr, "glGetnUniformivEXT");
    glad_glesReadnPixelsEXT = (PFNGLREADNPIXELSEXTPROC) load(userptr, "glReadnPixelsEXT");
}
static void glad_gles_load_GL_EXT_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_semaphore) return;
    glad_glesDeleteSemaphoresEXT = (PFNGLDELETESEMAPHORESEXTPROC) load(userptr, "glDeleteSemaphoresEXT");
    glad_glesGenSemaphoresEXT = (PFNGLGENSEMAPHORESEXTPROC) load(userptr, "glGenSemaphoresEXT");
    glad_glesGetSemaphoreParameterui64vEXT = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glGetSemaphoreParameterui64vEXT");
    glad_glesGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glad_glesGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glad_glesIsSemaphoreEXT = (PFNGLISSEMAPHOREEXTPROC) load(userptr, "glIsSemaphoreEXT");
    glad_glesSemaphoreParameterui64vEXT = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glSemaphoreParameterui64vEXT");
    glad_glesSignalSemaphoreEXT = (PFNGLSIGNALSEMAPHOREEXTPROC) load(userptr, "glSignalSemaphoreEXT");
    glad_glesWaitSemaphoreEXT = (PFNGLWAITSEMAPHOREEXTPROC) load(userptr, "glWaitSemaphoreEXT");
}
static void glad_gles_load_GL_EXT_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_semaphore_fd) return;
    glad_glesImportSemaphoreFdEXT = (PFNGLIMPORTSEMAPHOREFDEXTPROC) load(userptr, "glImportSemaphoreFdEXT");
}
static void glad_gles_load_GL_EXT_semaphore_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_semaphore_win32) return;
    glad_glesImportSemaphoreWin32HandleEXT = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) load(userptr, "glImportSemaphoreWin32HandleEXT");
    glad_glesImportSemaphoreWin32NameEXT = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) load(userptr, "glImportSemaphoreWin32NameEXT");
}
static void glad_gles_load_GL_EXT_separate_shader_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_separate_shader_objects) return;
    glad_glesActiveShaderProgramEXT = (PFNGLACTIVESHADERPROGRAMEXTPROC) load(userptr, "glActiveShaderProgramEXT");
    glad_glesBindProgramPipelineEXT = (PFNGLBINDPROGRAMPIPELINEEXTPROC) load(userptr, "glBindProgramPipelineEXT");
    glad_glesCreateShaderProgramvEXT = (PFNGLCREATESHADERPROGRAMVEXTPROC) load(userptr, "glCreateShaderProgramvEXT");
    glad_glesDeleteProgramPipelinesEXT = (PFNGLDELETEPROGRAMPIPELINESEXTPROC) load(userptr, "glDeleteProgramPipelinesEXT");
    glad_glesGenProgramPipelinesEXT = (PFNGLGENPROGRAMPIPELINESEXTPROC) load(userptr, "glGenProgramPipelinesEXT");
    glad_glesGetProgramPipelineInfoLogEXT = (PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) load(userptr, "glGetProgramPipelineInfoLogEXT");
    glad_glesGetProgramPipelineivEXT = (PFNGLGETPROGRAMPIPELINEIVEXTPROC) load(userptr, "glGetProgramPipelineivEXT");
    glad_glesIsProgramPipelineEXT = (PFNGLISPROGRAMPIPELINEEXTPROC) load(userptr, "glIsProgramPipelineEXT");
    glad_glesProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) load(userptr, "glProgramParameteriEXT");
    glad_glesProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) load(userptr, "glProgramUniform1fEXT");
    glad_glesProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) load(userptr, "glProgramUniform1fvEXT");
    glad_glesProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) load(userptr, "glProgramUniform1iEXT");
    glad_glesProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) load(userptr, "glProgramUniform1ivEXT");
    glad_glesProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) load(userptr, "glProgramUniform1uiEXT");
    glad_glesProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) load(userptr, "glProgramUniform1uivEXT");
    glad_glesProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) load(userptr, "glProgramUniform2fEXT");
    glad_glesProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) load(userptr, "glProgramUniform2fvEXT");
    glad_glesProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) load(userptr, "glProgramUniform2iEXT");
    glad_glesProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) load(userptr, "glProgramUniform2ivEXT");
    glad_glesProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) load(userptr, "glProgramUniform2uiEXT");
    glad_glesProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) load(userptr, "glProgramUniform2uivEXT");
    glad_glesProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) load(userptr, "glProgramUniform3fEXT");
    glad_glesProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) load(userptr, "glProgramUniform3fvEXT");
    glad_glesProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) load(userptr, "glProgramUniform3iEXT");
    glad_glesProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) load(userptr, "glProgramUniform3ivEXT");
    glad_glesProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) load(userptr, "glProgramUniform3uiEXT");
    glad_glesProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) load(userptr, "glProgramUniform3uivEXT");
    glad_glesProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) load(userptr, "glProgramUniform4fEXT");
    glad_glesProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) load(userptr, "glProgramUniform4fvEXT");
    glad_glesProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) load(userptr, "glProgramUniform4iEXT");
    glad_glesProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) load(userptr, "glProgramUniform4ivEXT");
    glad_glesProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) load(userptr, "glProgramUniform4uiEXT");
    glad_glesProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) load(userptr, "glProgramUniform4uivEXT");
    glad_glesProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) load(userptr, "glProgramUniformMatrix2fvEXT");
    glad_glesProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) load(userptr, "glProgramUniformMatrix2x3fvEXT");
    glad_glesProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) load(userptr, "glProgramUniformMatrix2x4fvEXT");
    glad_glesProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) load(userptr, "glProgramUniformMatrix3fvEXT");
    glad_glesProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) load(userptr, "glProgramUniformMatrix3x2fvEXT");
    glad_glesProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) load(userptr, "glProgramUniformMatrix3x4fvEXT");
    glad_glesProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) load(userptr, "glProgramUniformMatrix4fvEXT");
    glad_glesProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) load(userptr, "glProgramUniformMatrix4x2fvEXT");
    glad_glesProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) load(userptr, "glProgramUniformMatrix4x3fvEXT");
    glad_glesUseProgramStagesEXT = (PFNGLUSEPROGRAMSTAGESEXTPROC) load(userptr, "glUseProgramStagesEXT");
    glad_glesValidateProgramPipelineEXT = (PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) load(userptr, "glValidateProgramPipelineEXT");
}
static void glad_gles_load_GL_EXT_shader_framebuffer_fetch_non_coherent( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_shader_framebuffer_fetch_non_coherent) return;
    glad_glesFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) load(userptr, "glFramebufferFetchBarrierEXT");
}
static void glad_gles_load_GL_EXT_shader_pixel_local_storage2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_shader_pixel_local_storage2) return;
    glad_glesClearPixelLocalStorageuiEXT = (PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC) load(userptr, "glClearPixelLocalStorageuiEXT");
    glad_glesFramebufferPixelLocalStorageSizeEXT = (PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) load(userptr, "glFramebufferPixelLocalStorageSizeEXT");
    glad_glesGetFramebufferPixelLocalStorageSizeEXT = (PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) load(userptr, "glGetFramebufferPixelLocalStorageSizeEXT");
}
static void glad_gles_load_GL_EXT_sparse_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_sparse_texture) return;
    glad_glesTexPageCommitmentEXT = (PFNGLTEXPAGECOMMITMENTEXTPROC) load(userptr, "glTexPageCommitmentEXT");
}
static void glad_gles_load_GL_EXT_tessellation_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_tessellation_shader) return;
    glad_glesPatchParameteriEXT = (PFNGLPATCHPARAMETERIEXTPROC) load(userptr, "glPatchParameteriEXT");
}
static void glad_gles_load_GL_EXT_texture_border_clamp( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_texture_border_clamp) return;
    glad_glesGetSamplerParameterIivEXT = (PFNGLGETSAMPLERPARAMETERIIVEXTPROC) load(userptr, "glGetSamplerParameterIivEXT");
    glad_glesGetSamplerParameterIuivEXT = (PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) load(userptr, "glGetSamplerParameterIuivEXT");
    glad_glesGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) load(userptr, "glGetTexParameterIivEXT");
    glad_glesGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) load(userptr, "glGetTexParameterIuivEXT");
    glad_glesSamplerParameterIivEXT = (PFNGLSAMPLERPARAMETERIIVEXTPROC) load(userptr, "glSamplerParameterIivEXT");
    glad_glesSamplerParameterIuivEXT = (PFNGLSAMPLERPARAMETERIUIVEXTPROC) load(userptr, "glSamplerParameterIuivEXT");
    glad_glesTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) load(userptr, "glTexParameterIivEXT");
    glad_glesTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) load(userptr, "glTexParameterIuivEXT");
}
static void glad_gles_load_GL_EXT_texture_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_texture_buffer) return;
    glad_glesTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) load(userptr, "glTexBufferEXT");
    glad_glesTexBufferRangeEXT = (PFNGLTEXBUFFERRANGEEXTPROC) load(userptr, "glTexBufferRangeEXT");
}
static void glad_gles_load_GL_EXT_texture_storage( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_texture_storage) return;
    glad_glesTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC) load(userptr, "glTexStorage1DEXT");
    glad_glesTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC) load(userptr, "glTexStorage2DEXT");
    glad_glesTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC) load(userptr, "glTexStorage3DEXT");
    glad_glesTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) load(userptr, "glTextureStorage1DEXT");
    glad_glesTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) load(userptr, "glTextureStorage2DEXT");
    glad_glesTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) load(userptr, "glTextureStorage3DEXT");
}
static void glad_gles_load_GL_EXT_texture_storage_compression( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_texture_storage_compression) return;
    glad_glesTexStorageAttribs2DEXT = (PFNGLTEXSTORAGEATTRIBS2DEXTPROC) load(userptr, "glTexStorageAttribs2DEXT");
    glad_glesTexStorageAttribs3DEXT = (PFNGLTEXSTORAGEATTRIBS3DEXTPROC) load(userptr, "glTexStorageAttribs3DEXT");
}
static void glad_gles_load_GL_EXT_texture_view( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_texture_view) return;
    glad_glesTextureViewEXT = (PFNGLTEXTUREVIEWEXTPROC) load(userptr, "glTextureViewEXT");
}
static void glad_gles_load_GL_EXT_win32_keyed_mutex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_win32_keyed_mutex) return;
    glad_glesAcquireKeyedMutexWin32EXT = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) load(userptr, "glAcquireKeyedMutexWin32EXT");
    glad_glesReleaseKeyedMutexWin32EXT = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) load(userptr, "glReleaseKeyedMutexWin32EXT");
}
static void glad_gles_load_GL_EXT_window_rectangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_EXT_window_rectangles) return;
    glad_glesWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) load(userptr, "glWindowRectanglesEXT");
}
static void glad_gles_load_GL_IMG_bindless_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_IMG_bindless_texture) return;
    glad_glesGetTextureHandleIMG = (PFNGLGETTEXTUREHANDLEIMGPROC) load(userptr, "glGetTextureHandleIMG");
    glad_glesGetTextureSamplerHandleIMG = (PFNGLGETTEXTURESAMPLERHANDLEIMGPROC) load(userptr, "glGetTextureSamplerHandleIMG");
    glad_glesProgramUniformHandleui64IMG = (PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC) load(userptr, "glProgramUniformHandleui64IMG");
    glad_glesProgramUniformHandleui64vIMG = (PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC) load(userptr, "glProgramUniformHandleui64vIMG");
    glad_glesUniformHandleui64IMG = (PFNGLUNIFORMHANDLEUI64IMGPROC) load(userptr, "glUniformHandleui64IMG");
    glad_glesUniformHandleui64vIMG = (PFNGLUNIFORMHANDLEUI64VIMGPROC) load(userptr, "glUniformHandleui64vIMG");
}
static void glad_gles_load_GL_IMG_framebuffer_downsample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_IMG_framebuffer_downsample) return;
    glad_glesFramebufferTexture2DDownsampleIMG = (PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC) load(userptr, "glFramebufferTexture2DDownsampleIMG");
    glad_glesFramebufferTextureLayerDownsampleIMG = (PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC) load(userptr, "glFramebufferTextureLayerDownsampleIMG");
}
static void glad_gles_load_GL_IMG_multisampled_render_to_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_IMG_multisampled_render_to_texture) return;
    glad_glesFramebufferTexture2DMultisampleIMG = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) load(userptr, "glFramebufferTexture2DMultisampleIMG");
    glad_glesRenderbufferStorageMultisampleIMG = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) load(userptr, "glRenderbufferStorageMultisampleIMG");
}
static void glad_gles_load_GL_INTEL_framebuffer_CMAA( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_INTEL_framebuffer_CMAA) return;
    glad_glesApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) load(userptr, "glApplyFramebufferAttachmentCMAAINTEL");
}
static void glad_gles_load_GL_INTEL_performance_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_INTEL_performance_query) return;
    glad_glesBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC) load(userptr, "glBeginPerfQueryINTEL");
    glad_glesCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC) load(userptr, "glCreatePerfQueryINTEL");
    glad_glesDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC) load(userptr, "glDeletePerfQueryINTEL");
    glad_glesEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC) load(userptr, "glEndPerfQueryINTEL");
    glad_glesGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) load(userptr, "glGetFirstPerfQueryIdINTEL");
    glad_glesGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC) load(userptr, "glGetNextPerfQueryIdINTEL");
    glad_glesGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC) load(userptr, "glGetPerfCounterInfoINTEL");
    glad_glesGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC) load(userptr, "glGetPerfQueryDataINTEL");
    glad_glesGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) load(userptr, "glGetPerfQueryIdByNameINTEL");
    glad_glesGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC) load(userptr, "glGetPerfQueryInfoINTEL");
}
static void glad_gles_load_GL_KHR_blend_equation_advanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_KHR_blend_equation_advanced) return;
    glad_glesBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) load(userptr, "glBlendBarrierKHR");
}
static void glad_gles_load_GL_KHR_debug( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_KHR_debug) return;
    glad_glesDebugMessageCallbackKHR = (PFNGLDEBUGMESSAGECALLBACKKHRPROC) load(userptr, "glDebugMessageCallbackKHR");
    glad_glesDebugMessageControlKHR = (PFNGLDEBUGMESSAGECONTROLKHRPROC) load(userptr, "glDebugMessageControlKHR");
    glad_glesDebugMessageInsertKHR = (PFNGLDEBUGMESSAGEINSERTKHRPROC) load(userptr, "glDebugMessageInsertKHR");
    glad_glesGetDebugMessageLogKHR = (PFNGLGETDEBUGMESSAGELOGKHRPROC) load(userptr, "glGetDebugMessageLogKHR");
    glad_glesGetObjectLabelKHR = (PFNGLGETOBJECTLABELKHRPROC) load(userptr, "glGetObjectLabelKHR");
    glad_glesGetObjectPtrLabelKHR = (PFNGLGETOBJECTPTRLABELKHRPROC) load(userptr, "glGetObjectPtrLabelKHR");
    glad_glesGetPointervKHR = (PFNGLGETPOINTERVKHRPROC) load(userptr, "glGetPointervKHR");
    glad_glesObjectLabelKHR = (PFNGLOBJECTLABELKHRPROC) load(userptr, "glObjectLabelKHR");
    glad_glesObjectPtrLabelKHR = (PFNGLOBJECTPTRLABELKHRPROC) load(userptr, "glObjectPtrLabelKHR");
    glad_glesPopDebugGroupKHR = (PFNGLPOPDEBUGGROUPKHRPROC) load(userptr, "glPopDebugGroupKHR");
    glad_glesPushDebugGroupKHR = (PFNGLPUSHDEBUGGROUPKHRPROC) load(userptr, "glPushDebugGroupKHR");
}
static void glad_gles_load_GL_KHR_parallel_shader_compile( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_KHR_parallel_shader_compile) return;
    glad_glesMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) load(userptr, "glMaxShaderCompilerThreadsKHR");
}
static void glad_gles_load_GL_KHR_robustness( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_KHR_robustness) return;
    glad_glesGetGraphicsResetStatusKHR = (PFNGLGETGRAPHICSRESETSTATUSKHRPROC) load(userptr, "glGetGraphicsResetStatusKHR");
    glad_glesGetnUniformfvKHR = (PFNGLGETNUNIFORMFVKHRPROC) load(userptr, "glGetnUniformfvKHR");
    glad_glesGetnUniformivKHR = (PFNGLGETNUNIFORMIVKHRPROC) load(userptr, "glGetnUniformivKHR");
    glad_glesGetnUniformuivKHR = (PFNGLGETNUNIFORMUIVKHRPROC) load(userptr, "glGetnUniformuivKHR");
    glad_glesReadnPixelsKHR = (PFNGLREADNPIXELSKHRPROC) load(userptr, "glReadnPixelsKHR");
}
static void glad_gles_load_GL_MESA_framebuffer_flip_y( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_MESA_framebuffer_flip_y) return;
    glad_glesFramebufferParameteriMESA = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) load(userptr, "glFramebufferParameteriMESA");
    glad_glesGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) load(userptr, "glGetFramebufferParameterivMESA");
}
static void glad_gles_load_GL_NV_bindless_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_bindless_texture) return;
    glad_glesGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC) load(userptr, "glGetImageHandleNV");
    glad_glesGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC) load(userptr, "glGetTextureHandleNV");
    glad_glesGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) load(userptr, "glGetTextureSamplerHandleNV");
    glad_glesIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC) load(userptr, "glIsImageHandleResidentNV");
    glad_glesIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) load(userptr, "glIsTextureHandleResidentNV");
    glad_glesMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) load(userptr, "glMakeImageHandleNonResidentNV");
    glad_glesMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) load(userptr, "glMakeImageHandleResidentNV");
    glad_glesMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) load(userptr, "glMakeTextureHandleNonResidentNV");
    glad_glesMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) load(userptr, "glMakeTextureHandleResidentNV");
    glad_glesProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) load(userptr, "glProgramUniformHandleui64NV");
    glad_glesProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) load(userptr, "glProgramUniformHandleui64vNV");
    glad_glesUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC) load(userptr, "glUniformHandleui64NV");
    glad_glesUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC) load(userptr, "glUniformHandleui64vNV");
}
static void glad_gles_load_GL_NV_blend_equation_advanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_blend_equation_advanced) return;
    glad_glesBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC) load(userptr, "glBlendBarrierNV");
    glad_glesBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC) load(userptr, "glBlendParameteriNV");
}
static void glad_gles_load_GL_NV_clip_space_w_scaling( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_clip_space_w_scaling) return;
    glad_glesViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) load(userptr, "glViewportPositionWScaleNV");
}
static void glad_gles_load_GL_NV_conditional_render( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_conditional_render) return;
    glad_glesBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC) load(userptr, "glBeginConditionalRenderNV");
    glad_glesEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC) load(userptr, "glEndConditionalRenderNV");
}
static void glad_gles_load_GL_NV_conservative_raster( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_conservative_raster) return;
    glad_glesSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC) load(userptr, "glSubpixelPrecisionBiasNV");
}
static void glad_gles_load_GL_NV_conservative_raster_pre_snap_triangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_conservative_raster_pre_snap_triangles) return;
    glad_glesConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) load(userptr, "glConservativeRasterParameteriNV");
}
static void glad_gles_load_GL_NV_copy_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_copy_buffer) return;
    glad_glesCopyBufferSubDataNV = (PFNGLCOPYBUFFERSUBDATANVPROC) load(userptr, "glCopyBufferSubDataNV");
}
static void glad_gles_load_GL_NV_coverage_sample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_coverage_sample) return;
    glad_glesCoverageMaskNV = (PFNGLCOVERAGEMASKNVPROC) load(userptr, "glCoverageMaskNV");
    glad_glesCoverageOperationNV = (PFNGLCOVERAGEOPERATIONNVPROC) load(userptr, "glCoverageOperationNV");
}
static void glad_gles_load_GL_NV_draw_buffers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_draw_buffers) return;
    glad_glesDrawBuffersNV = (PFNGLDRAWBUFFERSNVPROC) load(userptr, "glDrawBuffersNV");
}
static void glad_gles_load_GL_NV_draw_instanced( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_draw_instanced) return;
    glad_glesDrawArraysInstancedNV = (PFNGLDRAWARRAYSINSTANCEDNVPROC) load(userptr, "glDrawArraysInstancedNV");
    glad_glesDrawElementsInstancedNV = (PFNGLDRAWELEMENTSINSTANCEDNVPROC) load(userptr, "glDrawElementsInstancedNV");
}
static void glad_gles_load_GL_NV_draw_vulkan_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_draw_vulkan_image) return;
    glad_glesDrawVkImageNV = (PFNGLDRAWVKIMAGENVPROC) load(userptr, "glDrawVkImageNV");
    glad_glesGetVkProcAddrNV = (PFNGLGETVKPROCADDRNVPROC) load(userptr, "glGetVkProcAddrNV");
    glad_glesSignalVkFenceNV = (PFNGLSIGNALVKFENCENVPROC) load(userptr, "glSignalVkFenceNV");
    glad_glesSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC) load(userptr, "glSignalVkSemaphoreNV");
    glad_glesWaitVkSemaphoreNV = (PFNGLWAITVKSEMAPHORENVPROC) load(userptr, "glWaitVkSemaphoreNV");
}
static void glad_gles_load_GL_NV_fence( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_fence) return;
    glad_glesDeleteFencesNV = (PFNGLDELETEFENCESNVPROC) load(userptr, "glDeleteFencesNV");
    glad_glesFinishFenceNV = (PFNGLFINISHFENCENVPROC) load(userptr, "glFinishFenceNV");
    glad_glesGenFencesNV = (PFNGLGENFENCESNVPROC) load(userptr, "glGenFencesNV");
    glad_glesGetFenceivNV = (PFNGLGETFENCEIVNVPROC) load(userptr, "glGetFenceivNV");
    glad_glesIsFenceNV = (PFNGLISFENCENVPROC) load(userptr, "glIsFenceNV");
    glad_glesSetFenceNV = (PFNGLSETFENCENVPROC) load(userptr, "glSetFenceNV");
    glad_glesTestFenceNV = (PFNGLTESTFENCENVPROC) load(userptr, "glTestFenceNV");
}
static void glad_gles_load_GL_NV_fragment_coverage_to_color( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_fragment_coverage_to_color) return;
    glad_glesFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) load(userptr, "glFragmentCoverageColorNV");
}
static void glad_gles_load_GL_NV_framebuffer_blit( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_framebuffer_blit) return;
    glad_glesBlitFramebufferNV = (PFNGLBLITFRAMEBUFFERNVPROC) load(userptr, "glBlitFramebufferNV");
}
static void glad_gles_load_GL_NV_framebuffer_mixed_samples( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_framebuffer_mixed_samples) return;
    glad_glesCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) load(userptr, "glCoverageModulationNV");
    glad_glesCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) load(userptr, "glCoverageModulationTableNV");
    glad_glesGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) load(userptr, "glGetCoverageModulationTableNV");
    glad_glesRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) load(userptr, "glRasterSamplesEXT");
}
static void glad_gles_load_GL_NV_framebuffer_multisample( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_framebuffer_multisample) return;
    glad_glesRenderbufferStorageMultisampleNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) load(userptr, "glRenderbufferStorageMultisampleNV");
}
static void glad_gles_load_GL_NV_gpu_shader5( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_gpu_shader5) return;
    glad_glesGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) load(userptr, "glGetUniformi64vNV");
    glad_glesProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) load(userptr, "glProgramUniform1i64NV");
    glad_glesProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) load(userptr, "glProgramUniform1i64vNV");
    glad_glesProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) load(userptr, "glProgramUniform1ui64NV");
    glad_glesProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) load(userptr, "glProgramUniform1ui64vNV");
    glad_glesProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) load(userptr, "glProgramUniform2i64NV");
    glad_glesProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) load(userptr, "glProgramUniform2i64vNV");
    glad_glesProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) load(userptr, "glProgramUniform2ui64NV");
    glad_glesProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) load(userptr, "glProgramUniform2ui64vNV");
    glad_glesProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) load(userptr, "glProgramUniform3i64NV");
    glad_glesProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) load(userptr, "glProgramUniform3i64vNV");
    glad_glesProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) load(userptr, "glProgramUniform3ui64NV");
    glad_glesProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) load(userptr, "glProgramUniform3ui64vNV");
    glad_glesProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) load(userptr, "glProgramUniform4i64NV");
    glad_glesProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) load(userptr, "glProgramUniform4i64vNV");
    glad_glesProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) load(userptr, "glProgramUniform4ui64NV");
    glad_glesProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) load(userptr, "glProgramUniform4ui64vNV");
    glad_glesUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) load(userptr, "glUniform1i64NV");
    glad_glesUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) load(userptr, "glUniform1i64vNV");
    glad_glesUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) load(userptr, "glUniform1ui64NV");
    glad_glesUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) load(userptr, "glUniform1ui64vNV");
    glad_glesUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) load(userptr, "glUniform2i64NV");
    glad_glesUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) load(userptr, "glUniform2i64vNV");
    glad_glesUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) load(userptr, "glUniform2ui64NV");
    glad_glesUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) load(userptr, "glUniform2ui64vNV");
    glad_glesUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) load(userptr, "glUniform3i64NV");
    glad_glesUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) load(userptr, "glUniform3i64vNV");
    glad_glesUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) load(userptr, "glUniform3ui64NV");
    glad_glesUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) load(userptr, "glUniform3ui64vNV");
    glad_glesUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) load(userptr, "glUniform4i64NV");
    glad_glesUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) load(userptr, "glUniform4i64vNV");
    glad_glesUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) load(userptr, "glUniform4ui64NV");
    glad_glesUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) load(userptr, "glUniform4ui64vNV");
}
static void glad_gles_load_GL_NV_instanced_arrays( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_instanced_arrays) return;
    glad_glesVertexAttribDivisorNV = (PFNGLVERTEXATTRIBDIVISORNVPROC) load(userptr, "glVertexAttribDivisorNV");
}
static void glad_gles_load_GL_NV_internalformat_sample_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_internalformat_sample_query) return;
    glad_glesGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) load(userptr, "glGetInternalformatSampleivNV");
}
static void glad_gles_load_GL_NV_memory_attachment( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_memory_attachment) return;
    glad_glesBufferAttachMemoryNV = (PFNGLBUFFERATTACHMEMORYNVPROC) load(userptr, "glBufferAttachMemoryNV");
    glad_glesGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) load(userptr, "glGetMemoryObjectDetachedResourcesuivNV");
    glad_glesNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) load(userptr, "glNamedBufferAttachMemoryNV");
    glad_glesResetMemoryObjectParameterNV = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) load(userptr, "glResetMemoryObjectParameterNV");
    glad_glesTexAttachMemoryNV = (PFNGLTEXATTACHMEMORYNVPROC) load(userptr, "glTexAttachMemoryNV");
    glad_glesTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC) load(userptr, "glTextureAttachMemoryNV");
}
static void glad_gles_load_GL_NV_memory_object_sparse( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_memory_object_sparse) return;
    glad_glesBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) load(userptr, "glBufferPageCommitmentMemNV");
    glad_glesNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) load(userptr, "glNamedBufferPageCommitmentMemNV");
    glad_glesTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) load(userptr, "glTexPageCommitmentMemNV");
    glad_glesTexturePageCommitmentMemNV = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) load(userptr, "glTexturePageCommitmentMemNV");
}
static void glad_gles_load_GL_NV_mesh_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_mesh_shader) return;
    glad_glesDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) load(userptr, "glDrawMeshTasksIndirectNV");
    glad_glesDrawMeshTasksNV = (PFNGLDRAWMESHTASKSNVPROC) load(userptr, "glDrawMeshTasksNV");
    glad_glesMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) load(userptr, "glMultiDrawMeshTasksIndirectCountNV");
    glad_glesMultiDrawMeshTasksIndirectNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) load(userptr, "glMultiDrawMeshTasksIndirectNV");
}
static void glad_gles_load_GL_NV_non_square_matrices( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_non_square_matrices) return;
    glad_glesUniformMatrix2x3fvNV = (PFNGLUNIFORMMATRIX2X3FVNVPROC) load(userptr, "glUniformMatrix2x3fvNV");
    glad_glesUniformMatrix2x4fvNV = (PFNGLUNIFORMMATRIX2X4FVNVPROC) load(userptr, "glUniformMatrix2x4fvNV");
    glad_glesUniformMatrix3x2fvNV = (PFNGLUNIFORMMATRIX3X2FVNVPROC) load(userptr, "glUniformMatrix3x2fvNV");
    glad_glesUniformMatrix3x4fvNV = (PFNGLUNIFORMMATRIX3X4FVNVPROC) load(userptr, "glUniformMatrix3x4fvNV");
    glad_glesUniformMatrix4x2fvNV = (PFNGLUNIFORMMATRIX4X2FVNVPROC) load(userptr, "glUniformMatrix4x2fvNV");
    glad_glesUniformMatrix4x3fvNV = (PFNGLUNIFORMMATRIX4X3FVNVPROC) load(userptr, "glUniformMatrix4x3fvNV");
}
static void glad_gles_load_GL_NV_path_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_path_rendering) return;
    glad_glesCopyPathNV = (PFNGLCOPYPATHNVPROC) load(userptr, "glCopyPathNV");
    glad_glesCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) load(userptr, "glCoverFillPathInstancedNV");
    glad_glesCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC) load(userptr, "glCoverFillPathNV");
    glad_glesCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) load(userptr, "glCoverStrokePathInstancedNV");
    glad_glesCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC) load(userptr, "glCoverStrokePathNV");
    glad_glesDeletePathsNV = (PFNGLDELETEPATHSNVPROC) load(userptr, "glDeletePathsNV");
    glad_glesGenPathsNV = (PFNGLGENPATHSNVPROC) load(userptr, "glGenPathsNV");
    glad_glesGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC) load(userptr, "glGetPathCommandsNV");
    glad_glesGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC) load(userptr, "glGetPathCoordsNV");
    glad_glesGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC) load(userptr, "glGetPathDashArrayNV");
    glad_glesGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC) load(userptr, "glGetPathLengthNV");
    glad_glesGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC) load(userptr, "glGetPathMetricRangeNV");
    glad_glesGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC) load(userptr, "glGetPathMetricsNV");
    glad_glesGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC) load(userptr, "glGetPathParameterfvNV");
    glad_glesGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC) load(userptr, "glGetPathParameterivNV");
    glad_glesGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC) load(userptr, "glGetPathSpacingNV");
    glad_glesGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC) load(userptr, "glGetProgramResourcefvNV");
    glad_glesInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC) load(userptr, "glInterpolatePathsNV");
    glad_glesIsPathNV = (PFNGLISPATHNVPROC) load(userptr, "glIsPathNV");
    glad_glesIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC) load(userptr, "glIsPointInFillPathNV");
    glad_glesIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC) load(userptr, "glIsPointInStrokePathNV");
    glad_glesMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) load(userptr, "glMatrixFrustumEXT");
    glad_glesMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC) load(userptr, "glMatrixLoad3x2fNV");
    glad_glesMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC) load(userptr, "glMatrixLoad3x3fNV");
    glad_glesMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) load(userptr, "glMatrixLoadIdentityEXT");
    glad_glesMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) load(userptr, "glMatrixLoadTranspose3x3fNV");
    glad_glesMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) load(userptr, "glMatrixLoadTransposedEXT");
    glad_glesMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) load(userptr, "glMatrixLoadTransposefEXT");
    glad_glesMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) load(userptr, "glMatrixLoaddEXT");
    glad_glesMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) load(userptr, "glMatrixLoadfEXT");
    glad_glesMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC) load(userptr, "glMatrixMult3x2fNV");
    glad_glesMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC) load(userptr, "glMatrixMult3x3fNV");
    glad_glesMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) load(userptr, "glMatrixMultTranspose3x3fNV");
    glad_glesMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) load(userptr, "glMatrixMultTransposedEXT");
    glad_glesMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) load(userptr, "glMatrixMultTransposefEXT");
    glad_glesMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) load(userptr, "glMatrixMultdEXT");
    glad_glesMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) load(userptr, "glMatrixMultfEXT");
    glad_glesMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) load(userptr, "glMatrixOrthoEXT");
    glad_glesMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) load(userptr, "glMatrixPopEXT");
    glad_glesMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) load(userptr, "glMatrixPushEXT");
    glad_glesMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) load(userptr, "glMatrixRotatedEXT");
    glad_glesMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) load(userptr, "glMatrixRotatefEXT");
    glad_glesMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) load(userptr, "glMatrixScaledEXT");
    glad_glesMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) load(userptr, "glMatrixScalefEXT");
    glad_glesMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) load(userptr, "glMatrixTranslatedEXT");
    glad_glesMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) load(userptr, "glMatrixTranslatefEXT");
    glad_glesPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC) load(userptr, "glPathCommandsNV");
    glad_glesPathCoordsNV = (PFNGLPATHCOORDSNVPROC) load(userptr, "glPathCoordsNV");
    glad_glesPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC) load(userptr, "glPathCoverDepthFuncNV");
    glad_glesPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC) load(userptr, "glPathDashArrayNV");
    glad_glesPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC) load(userptr, "glPathGlyphIndexArrayNV");
    glad_glesPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC) load(userptr, "glPathGlyphIndexRangeNV");
    glad_glesPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC) load(userptr, "glPathGlyphRangeNV");
    glad_glesPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC) load(userptr, "glPathGlyphsNV");
    glad_glesPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) load(userptr, "glPathMemoryGlyphIndexArrayNV");
    glad_glesPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC) load(userptr, "glPathParameterfNV");
    glad_glesPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC) load(userptr, "glPathParameterfvNV");
    glad_glesPathParameteriNV = (PFNGLPATHPARAMETERINVPROC) load(userptr, "glPathParameteriNV");
    glad_glesPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC) load(userptr, "glPathParameterivNV");
    glad_glesPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) load(userptr, "glPathStencilDepthOffsetNV");
    glad_glesPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC) load(userptr, "glPathStencilFuncNV");
    glad_glesPathStringNV = (PFNGLPATHSTRINGNVPROC) load(userptr, "glPathStringNV");
    glad_glesPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC) load(userptr, "glPathSubCommandsNV");
    glad_glesPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC) load(userptr, "glPathSubCoordsNV");
    glad_glesPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC) load(userptr, "glPointAlongPathNV");
    glad_glesProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) load(userptr, "glProgramPathFragmentInputGenNV");
    glad_glesStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) load(userptr, "glStencilFillPathInstancedNV");
    glad_glesStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC) load(userptr, "glStencilFillPathNV");
    glad_glesStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) load(userptr, "glStencilStrokePathInstancedNV");
    glad_glesStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC) load(userptr, "glStencilStrokePathNV");
    glad_glesStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) load(userptr, "glStencilThenCoverFillPathInstancedNV");
    glad_glesStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) load(userptr, "glStencilThenCoverFillPathNV");
    glad_glesStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) load(userptr, "glStencilThenCoverStrokePathInstancedNV");
    glad_glesStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) load(userptr, "glStencilThenCoverStrokePathNV");
    glad_glesTransformPathNV = (PFNGLTRANSFORMPATHNVPROC) load(userptr, "glTransformPathNV");
    glad_glesWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC) load(userptr, "glWeightPathsNV");
}
static void glad_gles_load_GL_NV_polygon_mode( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_polygon_mode) return;
    glad_glesPolygonModeNV = (PFNGLPOLYGONMODENVPROC) load(userptr, "glPolygonModeNV");
}
static void glad_gles_load_GL_NV_read_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_read_buffer) return;
    glad_glesReadBufferNV = (PFNGLREADBUFFERNVPROC) load(userptr, "glReadBufferNV");
}
static void glad_gles_load_GL_NV_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_sample_locations) return;
    glad_glesFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) load(userptr, "glFramebufferSampleLocationsfvNV");
    glad_glesNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) load(userptr, "glNamedFramebufferSampleLocationsfvNV");
    glad_glesResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC) load(userptr, "glResolveDepthValuesNV");
}
static void glad_gles_load_GL_NV_scissor_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_scissor_exclusive) return;
    glad_glesScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) load(userptr, "glScissorExclusiveArrayvNV");
    glad_glesScissorExclusiveNV = (PFNGLSCISSOREXCLUSIVENVPROC) load(userptr, "glScissorExclusiveNV");
}
static void glad_gles_load_GL_NV_shading_rate_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_shading_rate_image) return;
    glad_glesBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC) load(userptr, "glBindShadingRateImageNV");
    glad_glesGetShadingRateImagePaletteNV = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) load(userptr, "glGetShadingRateImagePaletteNV");
    glad_glesGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) load(userptr, "glGetShadingRateSampleLocationivNV");
    glad_glesShadingRateImageBarrierNV = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) load(userptr, "glShadingRateImageBarrierNV");
    glad_glesShadingRateImagePaletteNV = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) load(userptr, "glShadingRateImagePaletteNV");
    glad_glesShadingRateSampleOrderCustomNV = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) load(userptr, "glShadingRateSampleOrderCustomNV");
    glad_glesShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC) load(userptr, "glShadingRateSampleOrderNV");
}
static void glad_gles_load_GL_NV_timeline_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_timeline_semaphore) return;
    glad_glesCreateSemaphoresNV = (PFNGLCREATESEMAPHORESNVPROC) load(userptr, "glCreateSemaphoresNV");
    glad_glesGetSemaphoreParameterivNV = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC) load(userptr, "glGetSemaphoreParameterivNV");
    glad_glesSemaphoreParameterivNV = (PFNGLSEMAPHOREPARAMETERIVNVPROC) load(userptr, "glSemaphoreParameterivNV");
}
static void glad_gles_load_GL_NV_viewport_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_viewport_array) return;
    glad_glesDepthRangeArrayfvNV = (PFNGLDEPTHRANGEARRAYFVNVPROC) load(userptr, "glDepthRangeArrayfvNV");
    glad_glesDepthRangeIndexedfNV = (PFNGLDEPTHRANGEINDEXEDFNVPROC) load(userptr, "glDepthRangeIndexedfNV");
    glad_glesDisableiNV = (PFNGLDISABLEINVPROC) load(userptr, "glDisableiNV");
    glad_glesEnableiNV = (PFNGLENABLEINVPROC) load(userptr, "glEnableiNV");
    glad_glesGetFloati_vNV = (PFNGLGETFLOATI_VNVPROC) load(userptr, "glGetFloati_vNV");
    glad_glesIsEnablediNV = (PFNGLISENABLEDINVPROC) load(userptr, "glIsEnablediNV");
    glad_glesScissorArrayvNV = (PFNGLSCISSORARRAYVNVPROC) load(userptr, "glScissorArrayvNV");
    glad_glesScissorIndexedNV = (PFNGLSCISSORINDEXEDNVPROC) load(userptr, "glScissorIndexedNV");
    glad_glesScissorIndexedvNV = (PFNGLSCISSORINDEXEDVNVPROC) load(userptr, "glScissorIndexedvNV");
    glad_glesViewportArrayvNV = (PFNGLVIEWPORTARRAYVNVPROC) load(userptr, "glViewportArrayvNV");
    glad_glesViewportIndexedfNV = (PFNGLVIEWPORTINDEXEDFNVPROC) load(userptr, "glViewportIndexedfNV");
    glad_glesViewportIndexedfvNV = (PFNGLVIEWPORTINDEXEDFVNVPROC) load(userptr, "glViewportIndexedfvNV");
}
static void glad_gles_load_GL_NV_viewport_swizzle( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_NV_viewport_swizzle) return;
    glad_glesViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) load(userptr, "glViewportSwizzleNV");
}
static void glad_gles_load_GL_OES_EGL_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_EGL_image) return;
    glad_glesEGLImageTargetRenderbufferStorageOES = (PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) load(userptr, "glEGLImageTargetRenderbufferStorageOES");
    glad_glesEGLImageTargetTexture2DOES = (PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) load(userptr, "glEGLImageTargetTexture2DOES");
}
static void glad_gles_load_GL_OES_copy_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_copy_image) return;
    glad_glesCopyImageSubDataOES = (PFNGLCOPYIMAGESUBDATAOESPROC) load(userptr, "glCopyImageSubDataOES");
}
static void glad_gles_load_GL_OES_draw_buffers_indexed( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_draw_buffers_indexed) return;
    glad_glesBlendEquationSeparateiOES = (PFNGLBLENDEQUATIONSEPARATEIOESPROC) load(userptr, "glBlendEquationSeparateiOES");
    glad_glesBlendEquationiOES = (PFNGLBLENDEQUATIONIOESPROC) load(userptr, "glBlendEquationiOES");
    glad_glesBlendFuncSeparateiOES = (PFNGLBLENDFUNCSEPARATEIOESPROC) load(userptr, "glBlendFuncSeparateiOES");
    glad_glesBlendFunciOES = (PFNGLBLENDFUNCIOESPROC) load(userptr, "glBlendFunciOES");
    glad_glesColorMaskiOES = (PFNGLCOLORMASKIOESPROC) load(userptr, "glColorMaskiOES");
    glad_glesDisableiOES = (PFNGLDISABLEIOESPROC) load(userptr, "glDisableiOES");
    glad_glesEnableiOES = (PFNGLENABLEIOESPROC) load(userptr, "glEnableiOES");
    glad_glesIsEnablediOES = (PFNGLISENABLEDIOESPROC) load(userptr, "glIsEnablediOES");
}
static void glad_gles_load_GL_OES_draw_elements_base_vertex( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_draw_elements_base_vertex) return;
    glad_glesDrawElementsBaseVertexOES = (PFNGLDRAWELEMENTSBASEVERTEXOESPROC) load(userptr, "glDrawElementsBaseVertexOES");
    glad_glesDrawElementsInstancedBaseVertexOES = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) load(userptr, "glDrawElementsInstancedBaseVertexOES");
    glad_glesDrawRangeElementsBaseVertexOES = (PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) load(userptr, "glDrawRangeElementsBaseVertexOES");
    glad_glesMultiDrawElementsBaseVertexEXT = (PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) load(userptr, "glMultiDrawElementsBaseVertexEXT");
}
static void glad_gles_load_GL_OES_geometry_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_geometry_shader) return;
    glad_glesFramebufferTextureOES = (PFNGLFRAMEBUFFERTEXTUREOESPROC) load(userptr, "glFramebufferTextureOES");
}
static void glad_gles_load_GL_OES_get_program_binary( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_get_program_binary) return;
    glad_glesGetProgramBinaryOES = (PFNGLGETPROGRAMBINARYOESPROC) load(userptr, "glGetProgramBinaryOES");
    glad_glesProgramBinaryOES = (PFNGLPROGRAMBINARYOESPROC) load(userptr, "glProgramBinaryOES");
}
static void glad_gles_load_GL_OES_mapbuffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_mapbuffer) return;
    glad_glesGetBufferPointervOES = (PFNGLGETBUFFERPOINTERVOESPROC) load(userptr, "glGetBufferPointervOES");
    glad_glesMapBufferOES = (PFNGLMAPBUFFEROESPROC) load(userptr, "glMapBufferOES");
    glad_glesUnmapBufferOES = (PFNGLUNMAPBUFFEROESPROC) load(userptr, "glUnmapBufferOES");
}
static void glad_gles_load_GL_OES_primitive_bounding_box( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_primitive_bounding_box) return;
    glad_glesPrimitiveBoundingBoxOES = (PFNGLPRIMITIVEBOUNDINGBOXOESPROC) load(userptr, "glPrimitiveBoundingBoxOES");
}
static void glad_gles_load_GL_OES_sample_shading( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_sample_shading) return;
    glad_glesMinSampleShadingOES = (PFNGLMINSAMPLESHADINGOESPROC) load(userptr, "glMinSampleShadingOES");
}
static void glad_gles_load_GL_OES_tessellation_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_tessellation_shader) return;
    glad_glesPatchParameteriOES = (PFNGLPATCHPARAMETERIOESPROC) load(userptr, "glPatchParameteriOES");
}
static void glad_gles_load_GL_OES_texture_3D( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_texture_3D) return;
    glad_glesCompressedTexImage3DOES = (PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) load(userptr, "glCompressedTexImage3DOES");
    glad_glesCompressedTexSubImage3DOES = (PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) load(userptr, "glCompressedTexSubImage3DOES");
    glad_glesCopyTexSubImage3DOES = (PFNGLCOPYTEXSUBIMAGE3DOESPROC) load(userptr, "glCopyTexSubImage3DOES");
    glad_glesFramebufferTexture3DOES = (PFNGLFRAMEBUFFERTEXTURE3DOESPROC) load(userptr, "glFramebufferTexture3DOES");
    glad_glesTexImage3DOES = (PFNGLTEXIMAGE3DOESPROC) load(userptr, "glTexImage3DOES");
    glad_glesTexSubImage3DOES = (PFNGLTEXSUBIMAGE3DOESPROC) load(userptr, "glTexSubImage3DOES");
}
static void glad_gles_load_GL_OES_texture_border_clamp( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_texture_border_clamp) return;
    glad_glesGetSamplerParameterIivOES = (PFNGLGETSAMPLERPARAMETERIIVOESPROC) load(userptr, "glGetSamplerParameterIivOES");
    glad_glesGetSamplerParameterIuivOES = (PFNGLGETSAMPLERPARAMETERIUIVOESPROC) load(userptr, "glGetSamplerParameterIuivOES");
    glad_glesGetTexParameterIivOES = (PFNGLGETTEXPARAMETERIIVOESPROC) load(userptr, "glGetTexParameterIivOES");
    glad_glesGetTexParameterIuivOES = (PFNGLGETTEXPARAMETERIUIVOESPROC) load(userptr, "glGetTexParameterIuivOES");
    glad_glesSamplerParameterIivOES = (PFNGLSAMPLERPARAMETERIIVOESPROC) load(userptr, "glSamplerParameterIivOES");
    glad_glesSamplerParameterIuivOES = (PFNGLSAMPLERPARAMETERIUIVOESPROC) load(userptr, "glSamplerParameterIuivOES");
    glad_glesTexParameterIivOES = (PFNGLTEXPARAMETERIIVOESPROC) load(userptr, "glTexParameterIivOES");
    glad_glesTexParameterIuivOES = (PFNGLTEXPARAMETERIUIVOESPROC) load(userptr, "glTexParameterIuivOES");
}
static void glad_gles_load_GL_OES_texture_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_texture_buffer) return;
    glad_glesTexBufferOES = (PFNGLTEXBUFFEROESPROC) load(userptr, "glTexBufferOES");
    glad_glesTexBufferRangeOES = (PFNGLTEXBUFFERRANGEOESPROC) load(userptr, "glTexBufferRangeOES");
}
static void glad_gles_load_GL_OES_texture_storage_multisample_2d_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_texture_storage_multisample_2d_array) return;
    glad_glesTexStorage3DMultisampleOES = (PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) load(userptr, "glTexStorage3DMultisampleOES");
}
static void glad_gles_load_GL_OES_texture_view( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_texture_view) return;
    glad_glesTextureViewOES = (PFNGLTEXTUREVIEWOESPROC) load(userptr, "glTextureViewOES");
}
static void glad_gles_load_GL_OES_vertex_array_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_vertex_array_object) return;
    glad_glesBindVertexArrayOES = (PFNGLBINDVERTEXARRAYOESPROC) load(userptr, "glBindVertexArrayOES");
    glad_glesDeleteVertexArraysOES = (PFNGLDELETEVERTEXARRAYSOESPROC) load(userptr, "glDeleteVertexArraysOES");
    glad_glesGenVertexArraysOES = (PFNGLGENVERTEXARRAYSOESPROC) load(userptr, "glGenVertexArraysOES");
    glad_glesIsVertexArrayOES = (PFNGLISVERTEXARRAYOESPROC) load(userptr, "glIsVertexArrayOES");
}
static void glad_gles_load_GL_OES_viewport_array( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OES_viewport_array) return;
    glad_glesDepthRangeArrayfvOES = (PFNGLDEPTHRANGEARRAYFVOESPROC) load(userptr, "glDepthRangeArrayfvOES");
    glad_glesDepthRangeIndexedfOES = (PFNGLDEPTHRANGEINDEXEDFOESPROC) load(userptr, "glDepthRangeIndexedfOES");
    glad_glesDisableiOES = (PFNGLDISABLEIOESPROC) load(userptr, "glDisableiOES");
    glad_glesEnableiOES = (PFNGLENABLEIOESPROC) load(userptr, "glEnableiOES");
    glad_glesGetFloati_vOES = (PFNGLGETFLOATI_VOESPROC) load(userptr, "glGetFloati_vOES");
    glad_glesIsEnablediOES = (PFNGLISENABLEDIOESPROC) load(userptr, "glIsEnablediOES");
    glad_glesScissorArrayvOES = (PFNGLSCISSORARRAYVOESPROC) load(userptr, "glScissorArrayvOES");
    glad_glesScissorIndexedOES = (PFNGLSCISSORINDEXEDOESPROC) load(userptr, "glScissorIndexedOES");
    glad_glesScissorIndexedvOES = (PFNGLSCISSORINDEXEDVOESPROC) load(userptr, "glScissorIndexedvOES");
    glad_glesViewportArrayvOES = (PFNGLVIEWPORTARRAYVOESPROC) load(userptr, "glViewportArrayvOES");
    glad_glesViewportIndexedfOES = (PFNGLVIEWPORTINDEXEDFOESPROC) load(userptr, "glViewportIndexedfOES");
    glad_glesViewportIndexedfvOES = (PFNGLVIEWPORTINDEXEDFVOESPROC) load(userptr, "glViewportIndexedfvOES");
}
static void glad_gles_load_GL_OVR_multiview( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OVR_multiview) return;
    glad_glesFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) load(userptr, "glFramebufferTextureMultiviewOVR");
}
static void glad_gles_load_GL_OVR_multiview_multisampled_render_to_texture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_OVR_multiview_multisampled_render_to_texture) return;
    glad_glesFramebufferTextureMultisampleMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) load(userptr, "glFramebufferTextureMultisampleMultiviewOVR");
}
static void glad_gles_load_GL_QCOM_alpha_test( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_alpha_test) return;
    glad_glesAlphaFuncQCOM = (PFNGLALPHAFUNCQCOMPROC) load(userptr, "glAlphaFuncQCOM");
}
static void glad_gles_load_GL_QCOM_driver_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_driver_control) return;
    glad_glesDisableDriverControlQCOM = (PFNGLDISABLEDRIVERCONTROLQCOMPROC) load(userptr, "glDisableDriverControlQCOM");
    glad_glesEnableDriverControlQCOM = (PFNGLENABLEDRIVERCONTROLQCOMPROC) load(userptr, "glEnableDriverControlQCOM");
    glad_glesGetDriverControlStringQCOM = (PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) load(userptr, "glGetDriverControlStringQCOM");
    glad_glesGetDriverControlsQCOM = (PFNGLGETDRIVERCONTROLSQCOMPROC) load(userptr, "glGetDriverControlsQCOM");
}
static void glad_gles_load_GL_QCOM_extended_get( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_extended_get) return;
    glad_glesExtGetBufferPointervQCOM = (PFNGLEXTGETBUFFERPOINTERVQCOMPROC) load(userptr, "glExtGetBufferPointervQCOM");
    glad_glesExtGetBuffersQCOM = (PFNGLEXTGETBUFFERSQCOMPROC) load(userptr, "glExtGetBuffersQCOM");
    glad_glesExtGetFramebuffersQCOM = (PFNGLEXTGETFRAMEBUFFERSQCOMPROC) load(userptr, "glExtGetFramebuffersQCOM");
    glad_glesExtGetRenderbuffersQCOM = (PFNGLEXTGETRENDERBUFFERSQCOMPROC) load(userptr, "glExtGetRenderbuffersQCOM");
    glad_glesExtGetTexLevelParameterivQCOM = (PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) load(userptr, "glExtGetTexLevelParameterivQCOM");
    glad_glesExtGetTexSubImageQCOM = (PFNGLEXTGETTEXSUBIMAGEQCOMPROC) load(userptr, "glExtGetTexSubImageQCOM");
    glad_glesExtGetTexturesQCOM = (PFNGLEXTGETTEXTURESQCOMPROC) load(userptr, "glExtGetTexturesQCOM");
    glad_glesExtTexObjectStateOverrideiQCOM = (PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) load(userptr, "glExtTexObjectStateOverrideiQCOM");
}
static void glad_gles_load_GL_QCOM_extended_get2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_extended_get2) return;
    glad_glesExtGetProgramBinarySourceQCOM = (PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) load(userptr, "glExtGetProgramBinarySourceQCOM");
    glad_glesExtGetProgramsQCOM = (PFNGLEXTGETPROGRAMSQCOMPROC) load(userptr, "glExtGetProgramsQCOM");
    glad_glesExtGetShadersQCOM = (PFNGLEXTGETSHADERSQCOMPROC) load(userptr, "glExtGetShadersQCOM");
    glad_glesExtIsProgramBinaryQCOM = (PFNGLEXTISPROGRAMBINARYQCOMPROC) load(userptr, "glExtIsProgramBinaryQCOM");
}
static void glad_gles_load_GL_QCOM_frame_extrapolation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_frame_extrapolation) return;
    glad_glesExtrapolateTex2DQCOM = (PFNGLEXTRAPOLATETEX2DQCOMPROC) load(userptr, "glExtrapolateTex2DQCOM");
}
static void glad_gles_load_GL_QCOM_framebuffer_foveated( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_framebuffer_foveated) return;
    glad_glesFramebufferFoveationConfigQCOM = (PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC) load(userptr, "glFramebufferFoveationConfigQCOM");
    glad_glesFramebufferFoveationParametersQCOM = (PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC) load(userptr, "glFramebufferFoveationParametersQCOM");
}
static void glad_gles_load_GL_QCOM_motion_estimation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_motion_estimation) return;
    glad_glesTexEstimateMotionQCOM = (PFNGLTEXESTIMATEMOTIONQCOMPROC) load(userptr, "glTexEstimateMotionQCOM");
    glad_glesTexEstimateMotionRegionsQCOM = (PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC) load(userptr, "glTexEstimateMotionRegionsQCOM");
}
static void glad_gles_load_GL_QCOM_shader_framebuffer_fetch_noncoherent( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_shader_framebuffer_fetch_noncoherent) return;
    glad_glesFramebufferFetchBarrierQCOM = (PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC) load(userptr, "glFramebufferFetchBarrierQCOM");
}
static void glad_gles_load_GL_QCOM_shading_rate( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_shading_rate) return;
    glad_glesShadingRateQCOM = (PFNGLSHADINGRATEQCOMPROC) load(userptr, "glShadingRateQCOM");
}
static void glad_gles_load_GL_QCOM_texture_foveated( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_texture_foveated) return;
    glad_glesTextureFoveationParametersQCOM = (PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC) load(userptr, "glTextureFoveationParametersQCOM");
}
static void glad_gles_load_GL_QCOM_tiled_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLES_QCOM_tiled_rendering) return;
    glad_glesEndTilingQCOM = (PFNGLENDTILINGQCOMPROC) load(userptr, "glEndTilingQCOM");
    glad_glesStartTilingQCOM = (PFNGLSTARTTILINGQCOMPROC) load(userptr, "glStartTilingQCOM");
}



#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
#define GLAD_GLES_IS_SOME_NEW_VERSION 1
#else
#define GLAD_GLES_IS_SOME_NEW_VERSION 0
#endif

static int glad_gles_get_extensions( int version, const char **out_exts, unsigned int *out_num_exts_i, char ***out_exts_i) {
#if GLAD_GLES_IS_SOME_NEW_VERSION
    if(GLAD_VERSION_MAJOR(version) < 3) {
#else
    GLAD_UNUSED(version);
    GLAD_UNUSED(out_num_exts_i);
    GLAD_UNUSED(out_exts_i);
#endif
        if (glad_glesGetString == NULL) {
            return 0;
        }
        *out_exts = (const char *)glad_glesGetString(GL_EXTENSIONS);
#if GLAD_GLES_IS_SOME_NEW_VERSION
    } else {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        if (glad_glesGetStringi == NULL || glad_glesGetIntegerv == NULL) {
            return 0;
        }
        glad_glesGetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        if (num_exts_i > 0) {
            exts_i = (char **) malloc(num_exts_i * (sizeof *exts_i));
        }
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) glad_glesGetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str != NULL) {
                memcpy(local_str, gl_str_tmp, len * sizeof(char));
            }

            exts_i[index] = local_str;
        }

        *out_num_exts_i = num_exts_i;
        *out_exts_i = exts_i;
    }
#endif
    return 1;
}
static void glad_gles_free_extensions(char **exts_i, unsigned int num_exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glad_gles_has_extension(int version, const char *exts, unsigned int num_exts_i, char **exts_i, const char *ext) {
    if(GLAD_VERSION_MAJOR(version) < 3 || !GLAD_GLES_IS_SOME_NEW_VERSION) {
        const char *extensions;
        const char *loc;
        const char *terminator;
        extensions = exts;
        if(extensions == NULL || ext == NULL) {
            return 0;
        }
        while(1) {
            loc = strstr(extensions, ext);
            if(loc == NULL) {
                return 0;
            }
            terminator = loc + strlen(ext);
            if((loc == extensions || *(loc - 1) == ' ') &&
                (*terminator == ' ' || *terminator == '\0')) {
                return 1;
            }
            extensions = terminator;
        }
    } else {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

static GLADapiproc glad_gles_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_gles_find_extensions_gles2( int version) {
    const char *exts = NULL;
    unsigned int num_exts_i = 0;
    char **exts_i = NULL;
    if (!glad_gles_get_extensions(version, &exts, &num_exts_i, &exts_i)) return 0;

    GLAD_GLES_AMD_compressed_3DC_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_AMD_compressed_3DC_texture");
    GLAD_GLES_AMD_compressed_ATC_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_AMD_compressed_ATC_texture");
    GLAD_GLES_AMD_framebuffer_multisample_advanced = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_AMD_framebuffer_multisample_advanced");
    GLAD_GLES_AMD_performance_monitor = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_AMD_performance_monitor");
    GLAD_GLES_AMD_program_binary_Z400 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_AMD_program_binary_Z400");
    GLAD_GLES_ANDROID_extension_pack_es31a = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANDROID_extension_pack_es31a");
    GLAD_GLES_ANGLE_depth_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_depth_texture");
    GLAD_GLES_ANGLE_framebuffer_blit = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_framebuffer_blit");
    GLAD_GLES_ANGLE_framebuffer_multisample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_framebuffer_multisample");
    GLAD_GLES_ANGLE_instanced_arrays = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_instanced_arrays");
    GLAD_GLES_ANGLE_pack_reverse_row_order = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_pack_reverse_row_order");
    GLAD_GLES_ANGLE_program_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_program_binary");
    GLAD_GLES_ANGLE_texture_compression_dxt3 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_texture_compression_dxt3");
    GLAD_GLES_ANGLE_texture_compression_dxt5 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_texture_compression_dxt5");
    GLAD_GLES_ANGLE_texture_usage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_texture_usage");
    GLAD_GLES_ANGLE_translated_shader_source = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ANGLE_translated_shader_source");
    GLAD_GLES_APPLE_clip_distance = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_clip_distance");
    GLAD_GLES_APPLE_color_buffer_packed_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_color_buffer_packed_float");
    GLAD_GLES_APPLE_copy_texture_levels = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_copy_texture_levels");
    GLAD_GLES_APPLE_framebuffer_multisample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_framebuffer_multisample");
    GLAD_GLES_APPLE_rgb_422 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_rgb_422");
    GLAD_GLES_APPLE_sync = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_sync");
    GLAD_GLES_APPLE_texture_format_BGRA8888 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_texture_format_BGRA8888");
    GLAD_GLES_APPLE_texture_max_level = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_texture_max_level");
    GLAD_GLES_APPLE_texture_packed_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_APPLE_texture_packed_float");
    GLAD_GLES_ARM_mali_program_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_mali_program_binary");
    GLAD_GLES_ARM_mali_shader_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_mali_shader_binary");
    GLAD_GLES_ARM_rgba8 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_rgba8");
    GLAD_GLES_ARM_shader_framebuffer_fetch = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_shader_framebuffer_fetch");
    GLAD_GLES_ARM_shader_framebuffer_fetch_depth_stencil = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_shader_framebuffer_fetch_depth_stencil");
    GLAD_GLES_ARM_texture_unnormalized_coordinates = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_ARM_texture_unnormalized_coordinates");
    GLAD_GLES_DMP_program_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_DMP_program_binary");
    GLAD_GLES_DMP_shader_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_DMP_shader_binary");
    GLAD_GLES_EXT_EGL_image_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_EGL_image_array");
    GLAD_GLES_EXT_EGL_image_storage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_EGL_image_storage");
    GLAD_GLES_EXT_EGL_image_storage_compression = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_EGL_image_storage_compression");
    GLAD_GLES_EXT_YUV_target = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_YUV_target");
    GLAD_GLES_EXT_base_instance = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_base_instance");
    GLAD_GLES_EXT_blend_func_extended = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_blend_func_extended");
    GLAD_GLES_EXT_blend_minmax = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_blend_minmax");
    GLAD_GLES_EXT_buffer_storage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_buffer_storage");
    GLAD_GLES_EXT_clear_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_clear_texture");
    GLAD_GLES_EXT_clip_control = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_clip_control");
    GLAD_GLES_EXT_clip_cull_distance = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_clip_cull_distance");
    GLAD_GLES_EXT_color_buffer_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_color_buffer_float");
    GLAD_GLES_EXT_color_buffer_half_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_color_buffer_half_float");
    GLAD_GLES_EXT_conservative_depth = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_conservative_depth");
    GLAD_GLES_EXT_copy_image = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_copy_image");
    GLAD_GLES_EXT_debug_label = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_debug_label");
    GLAD_GLES_EXT_debug_marker = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_debug_marker");
    GLAD_GLES_EXT_depth_clamp = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_depth_clamp");
    GLAD_GLES_EXT_discard_framebuffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_discard_framebuffer");
    GLAD_GLES_EXT_disjoint_timer_query = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_disjoint_timer_query");
    GLAD_GLES_EXT_draw_buffers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_draw_buffers");
    GLAD_GLES_EXT_draw_buffers_indexed = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_draw_buffers_indexed");
    GLAD_GLES_EXT_draw_elements_base_vertex = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_draw_elements_base_vertex");
    GLAD_GLES_EXT_draw_instanced = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_draw_instanced");
    GLAD_GLES_EXT_draw_transform_feedback = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_draw_transform_feedback");
    GLAD_GLES_EXT_external_buffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_external_buffer");
    GLAD_GLES_EXT_float_blend = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_float_blend");
    GLAD_GLES_EXT_fragment_shading_rate = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_fragment_shading_rate");
    GLAD_GLES_EXT_geometry_point_size = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_geometry_point_size");
    GLAD_GLES_EXT_geometry_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_geometry_shader");
    GLAD_GLES_EXT_gpu_shader5 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_gpu_shader5");
    GLAD_GLES_EXT_instanced_arrays = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_instanced_arrays");
    GLAD_GLES_EXT_map_buffer_range = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_map_buffer_range");
    GLAD_GLES_EXT_memory_object = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_memory_object");
    GLAD_GLES_EXT_memory_object_fd = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_memory_object_fd");
    GLAD_GLES_EXT_memory_object_win32 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_memory_object_win32");
    GLAD_GLES_EXT_multi_draw_arrays = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multi_draw_arrays");
    GLAD_GLES_EXT_multi_draw_indirect = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multi_draw_indirect");
    GLAD_GLES_EXT_multisampled_compatibility = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multisampled_compatibility");
    GLAD_GLES_EXT_multisampled_render_to_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multisampled_render_to_texture");
    GLAD_GLES_EXT_multisampled_render_to_texture2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multisampled_render_to_texture2");
    GLAD_GLES_EXT_multiview_draw_buffers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multiview_draw_buffers");
    GLAD_GLES_EXT_multiview_tessellation_geometry_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multiview_tessellation_geometry_shader");
    GLAD_GLES_EXT_multiview_texture_multisample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multiview_texture_multisample");
    GLAD_GLES_EXT_multiview_timer_query = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_multiview_timer_query");
    GLAD_GLES_EXT_occlusion_query_boolean = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_occlusion_query_boolean");
    GLAD_GLES_EXT_polygon_offset_clamp = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_polygon_offset_clamp");
    GLAD_GLES_EXT_post_depth_coverage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_post_depth_coverage");
    GLAD_GLES_EXT_primitive_bounding_box = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_primitive_bounding_box");
    GLAD_GLES_EXT_protected_textures = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_protected_textures");
    GLAD_GLES_EXT_pvrtc_sRGB = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_pvrtc_sRGB");
    GLAD_GLES_EXT_raster_multisample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_raster_multisample");
    GLAD_GLES_EXT_read_format_bgra = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_read_format_bgra");
    GLAD_GLES_EXT_render_snorm = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_render_snorm");
    GLAD_GLES_EXT_robustness = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_robustness");
    GLAD_GLES_EXT_sRGB = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_sRGB");
    GLAD_GLES_EXT_sRGB_write_control = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_sRGB_write_control");
    GLAD_GLES_EXT_semaphore = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_semaphore");
    GLAD_GLES_EXT_semaphore_fd = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_semaphore_fd");
    GLAD_GLES_EXT_semaphore_win32 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_semaphore_win32");
    GLAD_GLES_EXT_separate_depth_stencil = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_separate_depth_stencil");
    GLAD_GLES_EXT_separate_shader_objects = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_separate_shader_objects");
    GLAD_GLES_EXT_shader_framebuffer_fetch = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_framebuffer_fetch");
    GLAD_GLES_EXT_shader_framebuffer_fetch_non_coherent = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_framebuffer_fetch_non_coherent");
    GLAD_GLES_EXT_shader_group_vote = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_group_vote");
    GLAD_GLES_EXT_shader_implicit_conversions = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_implicit_conversions");
    GLAD_GLES_EXT_shader_integer_mix = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_integer_mix");
    GLAD_GLES_EXT_shader_io_blocks = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_io_blocks");
    GLAD_GLES_EXT_shader_non_constant_global_initializers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_non_constant_global_initializers");
    GLAD_GLES_EXT_shader_pixel_local_storage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_pixel_local_storage");
    GLAD_GLES_EXT_shader_pixel_local_storage2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_pixel_local_storage2");
    GLAD_GLES_EXT_shader_samples_identical = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_samples_identical");
    GLAD_GLES_EXT_shader_texture_lod = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shader_texture_lod");
    GLAD_GLES_EXT_shadow_samplers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_shadow_samplers");
    GLAD_GLES_EXT_sparse_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_sparse_texture");
    GLAD_GLES_EXT_sparse_texture2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_sparse_texture2");
    GLAD_GLES_EXT_tessellation_point_size = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_tessellation_point_size");
    GLAD_GLES_EXT_tessellation_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_tessellation_shader");
    GLAD_GLES_EXT_texture_border_clamp = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_border_clamp");
    GLAD_GLES_EXT_texture_buffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_buffer");
    GLAD_GLES_EXT_texture_compression_astc_decode_mode = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_astc_decode_mode");
    GLAD_GLES_EXT_texture_compression_bptc = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_bptc");
    GLAD_GLES_EXT_texture_compression_dxt1 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_dxt1");
    GLAD_GLES_EXT_texture_compression_rgtc = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_rgtc");
    GLAD_GLES_EXT_texture_compression_s3tc = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_s3tc");
    GLAD_GLES_EXT_texture_compression_s3tc_srgb = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_compression_s3tc_srgb");
    GLAD_GLES_EXT_texture_cube_map_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_cube_map_array");
    GLAD_GLES_EXT_texture_filter_anisotropic = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_filter_anisotropic");
    GLAD_GLES_EXT_texture_filter_minmax = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_filter_minmax");
    GLAD_GLES_EXT_texture_format_BGRA8888 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_format_BGRA8888");
    GLAD_GLES_EXT_texture_format_sRGB_override = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_format_sRGB_override");
    GLAD_GLES_EXT_texture_mirror_clamp_to_edge = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_mirror_clamp_to_edge");
    GLAD_GLES_EXT_texture_norm16 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_norm16");
    GLAD_GLES_EXT_texture_query_lod = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_query_lod");
    GLAD_GLES_EXT_texture_rg = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_rg");
    GLAD_GLES_EXT_texture_sRGB_R8 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_sRGB_R8");
    GLAD_GLES_EXT_texture_sRGB_RG8 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_sRGB_RG8");
    GLAD_GLES_EXT_texture_sRGB_decode = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_sRGB_decode");
    GLAD_GLES_EXT_texture_shadow_lod = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_shadow_lod");
    GLAD_GLES_EXT_texture_storage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_storage");
    GLAD_GLES_EXT_texture_storage_compression = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_storage_compression");
    GLAD_GLES_EXT_texture_type_2_10_10_10_REV = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_type_2_10_10_10_REV");
    GLAD_GLES_EXT_texture_view = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_texture_view");
    GLAD_GLES_EXT_unpack_subimage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_unpack_subimage");
    GLAD_GLES_EXT_win32_keyed_mutex = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_win32_keyed_mutex");
    GLAD_GLES_EXT_window_rectangles = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_EXT_window_rectangles");
    GLAD_GLES_FJ_shader_binary_GCCSO = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_FJ_shader_binary_GCCSO");
    GLAD_GLES_IMG_bindless_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_bindless_texture");
    GLAD_GLES_IMG_framebuffer_downsample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_framebuffer_downsample");
    GLAD_GLES_IMG_multisampled_render_to_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_multisampled_render_to_texture");
    GLAD_GLES_IMG_program_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_program_binary");
    GLAD_GLES_IMG_read_format = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_read_format");
    GLAD_GLES_IMG_shader_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_shader_binary");
    GLAD_GLES_IMG_texture_compression_pvrtc = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_texture_compression_pvrtc");
    GLAD_GLES_IMG_texture_compression_pvrtc2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_texture_compression_pvrtc2");
    GLAD_GLES_IMG_texture_filter_cubic = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_IMG_texture_filter_cubic");
    GLAD_GLES_INTEL_blackhole_render = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_INTEL_blackhole_render");
    GLAD_GLES_INTEL_conservative_rasterization = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_INTEL_conservative_rasterization");
    GLAD_GLES_INTEL_framebuffer_CMAA = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_INTEL_framebuffer_CMAA");
    GLAD_GLES_INTEL_performance_query = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_INTEL_performance_query");
    GLAD_GLES_KHR_blend_equation_advanced = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_blend_equation_advanced");
    GLAD_GLES_KHR_blend_equation_advanced_coherent = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_blend_equation_advanced_coherent");
    GLAD_GLES_KHR_context_flush_control = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_context_flush_control");
    GLAD_GLES_KHR_debug = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_debug");
    GLAD_GLES_KHR_no_error = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_no_error");
    GLAD_GLES_KHR_parallel_shader_compile = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_parallel_shader_compile");
    GLAD_GLES_KHR_robust_buffer_access_behavior = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_robust_buffer_access_behavior");
    GLAD_GLES_KHR_robustness = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_robustness");
    GLAD_GLES_KHR_shader_subgroup = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_shader_subgroup");
    GLAD_GLES_KHR_texture_compression_astc_hdr = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_texture_compression_astc_hdr");
    GLAD_GLES_KHR_texture_compression_astc_ldr = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_texture_compression_astc_ldr");
    GLAD_GLES_KHR_texture_compression_astc_sliced_3d = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_KHR_texture_compression_astc_sliced_3d");
    GLAD_GLES_MESA_bgra = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_bgra");
    GLAD_GLES_MESA_framebuffer_flip_x = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_framebuffer_flip_x");
    GLAD_GLES_MESA_framebuffer_flip_y = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_framebuffer_flip_y");
    GLAD_GLES_MESA_framebuffer_swap_xy = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_framebuffer_swap_xy");
    GLAD_GLES_MESA_program_binary_formats = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_program_binary_formats");
    GLAD_GLES_MESA_shader_integer_functions = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_MESA_shader_integer_functions");
    GLAD_GLES_NVX_blend_equation_advanced_multi_draw_buffers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NVX_blend_equation_advanced_multi_draw_buffers");
    GLAD_GLES_NV_bindless_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_bindless_texture");
    GLAD_GLES_NV_blend_equation_advanced = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_blend_equation_advanced");
    GLAD_GLES_NV_blend_equation_advanced_coherent = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_blend_equation_advanced_coherent");
    GLAD_GLES_NV_blend_minmax_factor = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_blend_minmax_factor");
    GLAD_GLES_NV_clip_space_w_scaling = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_clip_space_w_scaling");
    GLAD_GLES_NV_compute_shader_derivatives = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_compute_shader_derivatives");
    GLAD_GLES_NV_conditional_render = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_conditional_render");
    GLAD_GLES_NV_conservative_raster = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_conservative_raster");
    GLAD_GLES_NV_conservative_raster_pre_snap = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_conservative_raster_pre_snap");
    GLAD_GLES_NV_conservative_raster_pre_snap_triangles = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_conservative_raster_pre_snap_triangles");
    GLAD_GLES_NV_copy_buffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_copy_buffer");
    GLAD_GLES_NV_coverage_sample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_coverage_sample");
    GLAD_GLES_NV_depth_nonlinear = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_depth_nonlinear");
    GLAD_GLES_NV_draw_buffers = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_draw_buffers");
    GLAD_GLES_NV_draw_instanced = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_draw_instanced");
    GLAD_GLES_NV_draw_vulkan_image = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_draw_vulkan_image");
    GLAD_GLES_NV_explicit_attrib_location = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_explicit_attrib_location");
    GLAD_GLES_NV_fbo_color_attachments = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fbo_color_attachments");
    GLAD_GLES_NV_fence = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fence");
    GLAD_GLES_NV_fill_rectangle = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fill_rectangle");
    GLAD_GLES_NV_fragment_coverage_to_color = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fragment_coverage_to_color");
    GLAD_GLES_NV_fragment_shader_barycentric = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fragment_shader_barycentric");
    GLAD_GLES_NV_fragment_shader_interlock = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_fragment_shader_interlock");
    GLAD_GLES_NV_framebuffer_blit = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_framebuffer_blit");
    GLAD_GLES_NV_framebuffer_mixed_samples = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_framebuffer_mixed_samples");
    GLAD_GLES_NV_framebuffer_multisample = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_framebuffer_multisample");
    GLAD_GLES_NV_generate_mipmap_sRGB = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_generate_mipmap_sRGB");
    GLAD_GLES_NV_geometry_shader_passthrough = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_geometry_shader_passthrough");
    GLAD_GLES_NV_gpu_shader5 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_gpu_shader5");
    GLAD_GLES_NV_image_formats = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_image_formats");
    GLAD_GLES_NV_instanced_arrays = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_instanced_arrays");
    GLAD_GLES_NV_internalformat_sample_query = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_internalformat_sample_query");
    GLAD_GLES_NV_memory_attachment = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_memory_attachment");
    GLAD_GLES_NV_memory_object_sparse = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_memory_object_sparse");
    GLAD_GLES_NV_mesh_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_mesh_shader");
    GLAD_GLES_NV_non_square_matrices = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_non_square_matrices");
    GLAD_GLES_NV_path_rendering = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_path_rendering");
    GLAD_GLES_NV_path_rendering_shared_edge = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_path_rendering_shared_edge");
    GLAD_GLES_NV_pixel_buffer_object = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_pixel_buffer_object");
    GLAD_GLES_NV_polygon_mode = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_polygon_mode");
    GLAD_GLES_NV_primitive_shading_rate = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_primitive_shading_rate");
    GLAD_GLES_NV_read_buffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_read_buffer");
    GLAD_GLES_NV_read_buffer_front = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_read_buffer_front");
    GLAD_GLES_NV_read_depth = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_read_depth");
    GLAD_GLES_NV_read_depth_stencil = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_read_depth_stencil");
    GLAD_GLES_NV_read_stencil = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_read_stencil");
    GLAD_GLES_NV_representative_fragment_test = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_representative_fragment_test");
    GLAD_GLES_NV_sRGB_formats = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_sRGB_formats");
    GLAD_GLES_NV_sample_locations = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_sample_locations");
    GLAD_GLES_NV_sample_mask_override_coverage = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_sample_mask_override_coverage");
    GLAD_GLES_NV_scissor_exclusive = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_scissor_exclusive");
    GLAD_GLES_NV_shader_atomic_fp16_vector = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shader_atomic_fp16_vector");
    GLAD_GLES_NV_shader_noperspective_interpolation = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shader_noperspective_interpolation");
    GLAD_GLES_NV_shader_subgroup_partitioned = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shader_subgroup_partitioned");
    GLAD_GLES_NV_shader_texture_footprint = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shader_texture_footprint");
    GLAD_GLES_NV_shading_rate_image = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shading_rate_image");
    GLAD_GLES_NV_shadow_samplers_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shadow_samplers_array");
    GLAD_GLES_NV_shadow_samplers_cube = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_shadow_samplers_cube");
    GLAD_GLES_NV_stereo_view_rendering = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_stereo_view_rendering");
    GLAD_GLES_NV_texture_border_clamp = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_texture_border_clamp");
    GLAD_GLES_NV_texture_compression_s3tc_update = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_texture_compression_s3tc_update");
    GLAD_GLES_NV_texture_npot_2D_mipmap = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_texture_npot_2D_mipmap");
    GLAD_GLES_NV_timeline_semaphore = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_timeline_semaphore");
    GLAD_GLES_NV_viewport_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_viewport_array");
    GLAD_GLES_NV_viewport_array2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_viewport_array2");
    GLAD_GLES_NV_viewport_swizzle = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_NV_viewport_swizzle");
    GLAD_GLES_OES_EGL_image = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_EGL_image");
    GLAD_GLES_OES_EGL_image_external = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_EGL_image_external");
    GLAD_GLES_OES_EGL_image_external_essl3 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_EGL_image_external_essl3");
    GLAD_GLES_OES_compressed_ETC1_RGB8_sub_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_compressed_ETC1_RGB8_sub_texture");
    GLAD_GLES_OES_compressed_ETC1_RGB8_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_compressed_ETC1_RGB8_texture");
    GLAD_GLES_OES_compressed_paletted_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_compressed_paletted_texture");
    GLAD_GLES_OES_copy_image = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_copy_image");
    GLAD_GLES_OES_depth24 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_depth24");
    GLAD_GLES_OES_depth32 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_depth32");
    GLAD_GLES_OES_depth_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_depth_texture");
    GLAD_GLES_OES_draw_buffers_indexed = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_draw_buffers_indexed");
    GLAD_GLES_OES_draw_elements_base_vertex = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_draw_elements_base_vertex");
    GLAD_GLES_OES_element_index_uint = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_element_index_uint");
    GLAD_GLES_OES_fbo_render_mipmap = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_fbo_render_mipmap");
    GLAD_GLES_OES_fragment_precision_high = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_fragment_precision_high");
    GLAD_GLES_OES_geometry_point_size = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_geometry_point_size");
    GLAD_GLES_OES_geometry_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_geometry_shader");
    GLAD_GLES_OES_get_program_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_get_program_binary");
    GLAD_GLES_OES_gpu_shader5 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_gpu_shader5");
    GLAD_GLES_OES_mapbuffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_mapbuffer");
    GLAD_GLES_OES_packed_depth_stencil = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_packed_depth_stencil");
    GLAD_GLES_OES_primitive_bounding_box = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_primitive_bounding_box");
    GLAD_GLES_OES_required_internalformat = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_required_internalformat");
    GLAD_GLES_OES_rgb8_rgba8 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_rgb8_rgba8");
    GLAD_GLES_OES_sample_shading = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_sample_shading");
    GLAD_GLES_OES_sample_variables = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_sample_variables");
    GLAD_GLES_OES_shader_image_atomic = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_shader_image_atomic");
    GLAD_GLES_OES_shader_io_blocks = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_shader_io_blocks");
    GLAD_GLES_OES_shader_multisample_interpolation = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_shader_multisample_interpolation");
    GLAD_GLES_OES_standard_derivatives = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_standard_derivatives");
    GLAD_GLES_OES_stencil1 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_stencil1");
    GLAD_GLES_OES_stencil4 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_stencil4");
    GLAD_GLES_OES_surfaceless_context = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_surfaceless_context");
    GLAD_GLES_OES_tessellation_point_size = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_tessellation_point_size");
    GLAD_GLES_OES_tessellation_shader = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_tessellation_shader");
    GLAD_GLES_OES_texture_3D = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_3D");
    GLAD_GLES_OES_texture_border_clamp = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_border_clamp");
    GLAD_GLES_OES_texture_buffer = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_buffer");
    GLAD_GLES_OES_texture_compression_astc = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_compression_astc");
    GLAD_GLES_OES_texture_cube_map_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_cube_map_array");
    GLAD_GLES_OES_texture_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_float");
    GLAD_GLES_OES_texture_float_linear = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_float_linear");
    GLAD_GLES_OES_texture_half_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_half_float");
    GLAD_GLES_OES_texture_half_float_linear = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_half_float_linear");
    GLAD_GLES_OES_texture_npot = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_npot");
    GLAD_GLES_OES_texture_stencil8 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_stencil8");
    GLAD_GLES_OES_texture_storage_multisample_2d_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_storage_multisample_2d_array");
    GLAD_GLES_OES_texture_view = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_texture_view");
    GLAD_GLES_OES_vertex_array_object = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_vertex_array_object");
    GLAD_GLES_OES_vertex_half_float = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_vertex_half_float");
    GLAD_GLES_OES_vertex_type_10_10_10_2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_vertex_type_10_10_10_2");
    GLAD_GLES_OES_viewport_array = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OES_viewport_array");
    GLAD_GLES_OVR_multiview = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OVR_multiview");
    GLAD_GLES_OVR_multiview2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OVR_multiview2");
    GLAD_GLES_OVR_multiview_multisampled_render_to_texture = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_OVR_multiview_multisampled_render_to_texture");
    GLAD_GLES_QCOM_YUV_texture_gather = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_YUV_texture_gather");
    GLAD_GLES_QCOM_alpha_test = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_alpha_test");
    GLAD_GLES_QCOM_binning_control = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_binning_control");
    GLAD_GLES_QCOM_driver_control = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_driver_control");
    GLAD_GLES_QCOM_extended_get = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_extended_get");
    GLAD_GLES_QCOM_extended_get2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_extended_get2");
    GLAD_GLES_QCOM_frame_extrapolation = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_frame_extrapolation");
    GLAD_GLES_QCOM_framebuffer_foveated = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_framebuffer_foveated");
    GLAD_GLES_QCOM_motion_estimation = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_motion_estimation");
    GLAD_GLES_QCOM_perfmon_global_mode = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_perfmon_global_mode");
    GLAD_GLES_QCOM_render_shared_exponent = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_render_shared_exponent");
    GLAD_GLES_QCOM_shader_framebuffer_fetch_noncoherent = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_shader_framebuffer_fetch_noncoherent");
    GLAD_GLES_QCOM_shader_framebuffer_fetch_rate = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_shader_framebuffer_fetch_rate");
    GLAD_GLES_QCOM_shading_rate = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_shading_rate");
    GLAD_GLES_QCOM_texture_foveated = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_texture_foveated");
    GLAD_GLES_QCOM_texture_foveated2 = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_texture_foveated2");
    GLAD_GLES_QCOM_texture_foveated_subsampled_layout = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_texture_foveated_subsampled_layout");
    GLAD_GLES_QCOM_tiled_rendering = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_tiled_rendering");
    GLAD_GLES_QCOM_writeonly_rendering = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_QCOM_writeonly_rendering");
    GLAD_GLES_VIV_shader_binary = glad_gles_has_extension(version, exts, num_exts_i, exts_i, "GL_VIV_shader_binary");

    glad_gles_free_extensions(exts_i, num_exts_i);

    return 1;
}

static int glad_gles_find_core_gles2(void) {
    int i;
    const char* version;
    const char* prefixes[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        "OpenGL SC ",
        NULL
    };
    int major = 0;
    int minor = 0;
    version = (const char*) glad_glesGetString(GL_VERSION);
    if (!version) return 0;
    for (i = 0;  prefixes[i];  i++) {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0) {
            version += length;
            break;
        }
    }

    GLAD_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

    GLAD_GLES_ES_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    GLAD_GLES_ES_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
    GLAD_GLES_ES_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
    GLAD_GLES_ES_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLES2UserPtr( GLADuserptrloadfunc load, void *userptr) {
    int version;

    glad_glesGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(glad_glesGetString == NULL) return 0;
    if(glad_glesGetString(GL_VERSION) == NULL) return 0;
    version = glad_gles_find_core_gles2();

    glad_gles_load_GL_ES_VERSION_2_0(load, userptr);
    glad_gles_load_GL_ES_VERSION_3_0(load, userptr);
    glad_gles_load_GL_ES_VERSION_3_1(load, userptr);
    glad_gles_load_GL_ES_VERSION_3_2(load, userptr);

    if (!glad_gles_find_extensions_gles2(version)) return 0;
    glad_gles_load_GL_AMD_framebuffer_multisample_advanced(load, userptr);
    glad_gles_load_GL_AMD_performance_monitor(load, userptr);
    glad_gles_load_GL_ANGLE_framebuffer_blit(load, userptr);
    glad_gles_load_GL_ANGLE_framebuffer_multisample(load, userptr);
    glad_gles_load_GL_ANGLE_instanced_arrays(load, userptr);
    glad_gles_load_GL_ANGLE_translated_shader_source(load, userptr);
    glad_gles_load_GL_APPLE_copy_texture_levels(load, userptr);
    glad_gles_load_GL_APPLE_framebuffer_multisample(load, userptr);
    glad_gles_load_GL_APPLE_sync(load, userptr);
    glad_gles_load_GL_EXT_EGL_image_storage(load, userptr);
    glad_gles_load_GL_EXT_base_instance(load, userptr);
    glad_gles_load_GL_EXT_blend_func_extended(load, userptr);
    glad_gles_load_GL_EXT_buffer_storage(load, userptr);
    glad_gles_load_GL_EXT_clear_texture(load, userptr);
    glad_gles_load_GL_EXT_clip_control(load, userptr);
    glad_gles_load_GL_EXT_copy_image(load, userptr);
    glad_gles_load_GL_EXT_debug_label(load, userptr);
    glad_gles_load_GL_EXT_debug_marker(load, userptr);
    glad_gles_load_GL_EXT_discard_framebuffer(load, userptr);
    glad_gles_load_GL_EXT_disjoint_timer_query(load, userptr);
    glad_gles_load_GL_EXT_draw_buffers(load, userptr);
    glad_gles_load_GL_EXT_draw_buffers_indexed(load, userptr);
    glad_gles_load_GL_EXT_draw_elements_base_vertex(load, userptr);
    glad_gles_load_GL_EXT_draw_instanced(load, userptr);
    glad_gles_load_GL_EXT_draw_transform_feedback(load, userptr);
    glad_gles_load_GL_EXT_external_buffer(load, userptr);
    glad_gles_load_GL_EXT_fragment_shading_rate(load, userptr);
    glad_gles_load_GL_EXT_geometry_shader(load, userptr);
    glad_gles_load_GL_EXT_instanced_arrays(load, userptr);
    glad_gles_load_GL_EXT_map_buffer_range(load, userptr);
    glad_gles_load_GL_EXT_memory_object(load, userptr);
    glad_gles_load_GL_EXT_memory_object_fd(load, userptr);
    glad_gles_load_GL_EXT_memory_object_win32(load, userptr);
    glad_gles_load_GL_EXT_multi_draw_arrays(load, userptr);
    glad_gles_load_GL_EXT_multi_draw_indirect(load, userptr);
    glad_gles_load_GL_EXT_multisampled_render_to_texture(load, userptr);
    glad_gles_load_GL_EXT_multiview_draw_buffers(load, userptr);
    glad_gles_load_GL_EXT_occlusion_query_boolean(load, userptr);
    glad_gles_load_GL_EXT_polygon_offset_clamp(load, userptr);
    glad_gles_load_GL_EXT_primitive_bounding_box(load, userptr);
    glad_gles_load_GL_EXT_raster_multisample(load, userptr);
    glad_gles_load_GL_EXT_robustness(load, userptr);
    glad_gles_load_GL_EXT_semaphore(load, userptr);
    glad_gles_load_GL_EXT_semaphore_fd(load, userptr);
    glad_gles_load_GL_EXT_semaphore_win32(load, userptr);
    glad_gles_load_GL_EXT_separate_shader_objects(load, userptr);
    glad_gles_load_GL_EXT_shader_framebuffer_fetch_non_coherent(load, userptr);
    glad_gles_load_GL_EXT_shader_pixel_local_storage2(load, userptr);
    glad_gles_load_GL_EXT_sparse_texture(load, userptr);
    glad_gles_load_GL_EXT_tessellation_shader(load, userptr);
    glad_gles_load_GL_EXT_texture_border_clamp(load, userptr);
    glad_gles_load_GL_EXT_texture_buffer(load, userptr);
    glad_gles_load_GL_EXT_texture_storage(load, userptr);
    glad_gles_load_GL_EXT_texture_storage_compression(load, userptr);
    glad_gles_load_GL_EXT_texture_view(load, userptr);
    glad_gles_load_GL_EXT_win32_keyed_mutex(load, userptr);
    glad_gles_load_GL_EXT_window_rectangles(load, userptr);
    glad_gles_load_GL_IMG_bindless_texture(load, userptr);
    glad_gles_load_GL_IMG_framebuffer_downsample(load, userptr);
    glad_gles_load_GL_IMG_multisampled_render_to_texture(load, userptr);
    glad_gles_load_GL_INTEL_framebuffer_CMAA(load, userptr);
    glad_gles_load_GL_INTEL_performance_query(load, userptr);
    glad_gles_load_GL_KHR_blend_equation_advanced(load, userptr);
    glad_gles_load_GL_KHR_debug(load, userptr);
    glad_gles_load_GL_KHR_parallel_shader_compile(load, userptr);
    glad_gles_load_GL_KHR_robustness(load, userptr);
    glad_gles_load_GL_MESA_framebuffer_flip_y(load, userptr);
    glad_gles_load_GL_NV_bindless_texture(load, userptr);
    glad_gles_load_GL_NV_blend_equation_advanced(load, userptr);
    glad_gles_load_GL_NV_clip_space_w_scaling(load, userptr);
    glad_gles_load_GL_NV_conditional_render(load, userptr);
    glad_gles_load_GL_NV_conservative_raster(load, userptr);
    glad_gles_load_GL_NV_conservative_raster_pre_snap_triangles(load, userptr);
    glad_gles_load_GL_NV_copy_buffer(load, userptr);
    glad_gles_load_GL_NV_coverage_sample(load, userptr);
    glad_gles_load_GL_NV_draw_buffers(load, userptr);
    glad_gles_load_GL_NV_draw_instanced(load, userptr);
    glad_gles_load_GL_NV_draw_vulkan_image(load, userptr);
    glad_gles_load_GL_NV_fence(load, userptr);
    glad_gles_load_GL_NV_fragment_coverage_to_color(load, userptr);
    glad_gles_load_GL_NV_framebuffer_blit(load, userptr);
    glad_gles_load_GL_NV_framebuffer_mixed_samples(load, userptr);
    glad_gles_load_GL_NV_framebuffer_multisample(load, userptr);
    glad_gles_load_GL_NV_gpu_shader5(load, userptr);
    glad_gles_load_GL_NV_instanced_arrays(load, userptr);
    glad_gles_load_GL_NV_internalformat_sample_query(load, userptr);
    glad_gles_load_GL_NV_memory_attachment(load, userptr);
    glad_gles_load_GL_NV_memory_object_sparse(load, userptr);
    glad_gles_load_GL_NV_mesh_shader(load, userptr);
    glad_gles_load_GL_NV_non_square_matrices(load, userptr);
    glad_gles_load_GL_NV_path_rendering(load, userptr);
    glad_gles_load_GL_NV_polygon_mode(load, userptr);
    glad_gles_load_GL_NV_read_buffer(load, userptr);
    glad_gles_load_GL_NV_sample_locations(load, userptr);
    glad_gles_load_GL_NV_scissor_exclusive(load, userptr);
    glad_gles_load_GL_NV_shading_rate_image(load, userptr);
    glad_gles_load_GL_NV_timeline_semaphore(load, userptr);
    glad_gles_load_GL_NV_viewport_array(load, userptr);
    glad_gles_load_GL_NV_viewport_swizzle(load, userptr);
    glad_gles_load_GL_OES_EGL_image(load, userptr);
    glad_gles_load_GL_OES_copy_image(load, userptr);
    glad_gles_load_GL_OES_draw_buffers_indexed(load, userptr);
    glad_gles_load_GL_OES_draw_elements_base_vertex(load, userptr);
    glad_gles_load_GL_OES_geometry_shader(load, userptr);
    glad_gles_load_GL_OES_get_program_binary(load, userptr);
    glad_gles_load_GL_OES_mapbuffer(load, userptr);
    glad_gles_load_GL_OES_primitive_bounding_box(load, userptr);
    glad_gles_load_GL_OES_sample_shading(load, userptr);
    glad_gles_load_GL_OES_tessellation_shader(load, userptr);
    glad_gles_load_GL_OES_texture_3D(load, userptr);
    glad_gles_load_GL_OES_texture_border_clamp(load, userptr);
    glad_gles_load_GL_OES_texture_buffer(load, userptr);
    glad_gles_load_GL_OES_texture_storage_multisample_2d_array(load, userptr);
    glad_gles_load_GL_OES_texture_view(load, userptr);
    glad_gles_load_GL_OES_vertex_array_object(load, userptr);
    glad_gles_load_GL_OES_viewport_array(load, userptr);
    glad_gles_load_GL_OVR_multiview(load, userptr);
    glad_gles_load_GL_OVR_multiview_multisampled_render_to_texture(load, userptr);
    glad_gles_load_GL_QCOM_alpha_test(load, userptr);
    glad_gles_load_GL_QCOM_driver_control(load, userptr);
    glad_gles_load_GL_QCOM_extended_get(load, userptr);
    glad_gles_load_GL_QCOM_extended_get2(load, userptr);
    glad_gles_load_GL_QCOM_frame_extrapolation(load, userptr);
    glad_gles_load_GL_QCOM_framebuffer_foveated(load, userptr);
    glad_gles_load_GL_QCOM_motion_estimation(load, userptr);
    glad_gles_load_GL_QCOM_shader_framebuffer_fetch_noncoherent(load, userptr);
    glad_gles_load_GL_QCOM_shading_rate(load, userptr);
    glad_gles_load_GL_QCOM_texture_foveated(load, userptr);
    glad_gles_load_GL_QCOM_tiled_rendering(load, userptr);



    return version;
}


int gladLoadGLES2( GLADloadfunc load) {
    return gladLoadGLES2UserPtr( glad_gles_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 

#ifdef GLAD_GLES2

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */

#if GLAD_PLATFORM_EMSCRIPTEN
#ifndef GLAD_EGL_H_
  typedef void (*__eglMustCastToProperFunctionPointerType)(void);
  typedef __eglMustCastToProperFunctionPointerType (GLAD_API_PTR *PFNEGLGETPROCADDRESSPROC)(const char *name);
#endif
  extern __eglMustCastToProperFunctionPointerType emscripten_GetProcAddress(const char *name);
#else
  #include <glad/egl.h>
#endif


struct _glad_gleses2_userptr {
    void *handle;
    PFNEGLGETPROCADDRESSPROC get_proc_address_ptr;
};


static GLADapiproc glad_gleses2_get_proc(void *vuserptr, const char* name) {
    struct _glad_gleses2_userptr userptr = *(struct _glad_gleses2_userptr*) vuserptr;
    GLADapiproc result = NULL;

#if GLAD_PLATFORM_EMSCRIPTEN
    GLAD_UNUSED(glad_dlsym_handle);
#else
    result = glad_dlsym_handle(userptr.handle, name);
#endif
    if (result == NULL) {
        result = userptr.get_proc_address_ptr(name);
    }

    return result;
}

static void* _glad_GLES2_loader_handle = NULL;

static void* glad_gleses2_dlopen_handle(void) {
#if GLAD_PLATFORM_EMSCRIPTEN
#elif GLAD_PLATFORM_APPLE
    static const char *NAMES[] = {"libGLESv2.dylib"};
#elif GLAD_PLATFORM_WIN32
    static const char *NAMES[] = {"GLESv2.dll", "libGLESv2.dll"};
#else
    static const char *NAMES[] = {"libGLESv2.so.2", "libGLESv2.so"};
#endif

#if GLAD_PLATFORM_EMSCRIPTEN
    GLAD_UNUSED(glad_get_dlopen_handle);
    return NULL;
#else
    if (_glad_GLES2_loader_handle == NULL) {
        _glad_GLES2_loader_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _glad_GLES2_loader_handle;
#endif
}

static struct _glad_gleses2_userptr glad_gleses2_build_userptr(void *handle) {
    struct _glad_gleses2_userptr userptr;
#if GLAD_PLATFORM_EMSCRIPTEN
    GLAD_UNUSED(handle);
    userptr.get_proc_address_ptr = emscripten_GetProcAddress;
#else
    userptr.handle = handle;
    userptr.get_proc_address_ptr = eglGetProcAddress;
#endif
    return userptr;
}

int gladLoaderLoadGLES2(void) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    struct _glad_gleses2_userptr userptr;

#if GLAD_PLATFORM_EMSCRIPTEN
    GLAD_UNUSED(handle);
    GLAD_UNUSED(did_load);
    GLAD_UNUSED(glad_gleses2_dlopen_handle);
    GLAD_UNUSED(glad_gleses2_build_userptr);
    userptr.get_proc_address_ptr = emscripten_GetProcAddress;
    version = gladLoadGLES2UserPtr(glad_gleses2_get_proc, &userptr);
#else
    if (eglGetProcAddress == NULL) {
        return 0;
    }

    did_load = _glad_GLES2_loader_handle == NULL;
    handle = glad_gleses2_dlopen_handle();
    if (handle != NULL) {
        userptr = glad_gleses2_build_userptr(handle);

        version = gladLoadGLES2UserPtr(glad_gleses2_get_proc, &userptr);

        if (!version && did_load) {
            gladLoaderUnloadGLES2();
        }
    }
#endif

    return version;
}



void gladLoaderUnloadGLES2(void) {
    if (_glad_GLES2_loader_handle != NULL) {
        glad_close_dlopen_handle(_glad_GLES2_loader_handle);
        _glad_GLES2_loader_handle = NULL;
    }
}

#endif /* GLAD_GLES2 */

#ifdef __cplusplus
}
#endif
