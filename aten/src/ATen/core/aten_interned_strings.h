#pragma once

// ATen symbols correspond exactly to operators defined in ATen.  Every
// symbol here corresponds exactly to an ATen operation which is defined
// in Declarations.yaml; attributes are in one-to-one correspondence with
// their ATen name.
//
// To explicitly use interned strings as symbols in your code, you must add
// them to this list.

#define FORALL_ATEN_BASE_SYMBOLS(_) \
_(aten, __and__) \
_(aten, __iand__) \
_(aten, __ilshift__) \
_(aten, __ior__) \
_(aten, __irshift__) \
_(aten, __ixor__) \
_(aten, __lshift__) \
_(aten, __or__) \
_(aten, __rshift__) \
_(aten, __xor__) \
_(aten, _abs) \
_(aten, _acos) \
_(aten, _addmv) \
_(aten, _addr) \
_(aten, _arange) \
_(aten, _acosh) \
_(aten, _asinh) \
_(aten, _atanh) \
_(aten, _argmax) \
_(aten, _argmin) \
_(aten, _asin) \
_(aten, _atan) \
_(aten, _baddbmm_mkl) \
_(aten, _cast_Byte) \
_(aten, _cast_Char) \
_(aten, _cast_Double) \
_(aten, _cast_Float) \
_(aten, _cast_Half) \
_(aten, _cast_Int) \
_(aten, _cast_Long) \
_(aten, _cast_Short) \
_(aten, _cat) \
_(aten, _ceil) \
_(aten, _clamp) \
_(aten, _clamp_max) \
_(aten, _clamp_min) \
_(aten, _convolution) \
_(aten, _convolution_double_backward) \
_(aten, convolution_overrideable) \
_(aten, convolution_backward_overrideable) \
_(aten, _convolution_nogroup) \
_(aten, _copy_ignoring_overlaps) \
_(aten, _cos) \
_(aten, _cosh) \
_(aten, _ctc_loss) \
_(aten, _ctc_loss_backward) \
_(aten, _cudnn_ctc_loss) \
_(aten, _cudnn_init_dropout_state) \
_(aten, _cudnn_rnn) \
_(aten, _cudnn_rnn_backward) \
_(aten, _cudnn_rnn_flatten_weight) \
_(aten, _cufft_clear_plan_cache) \
_(aten, _cufft_get_plan_cache_max_size) \
_(aten, _cufft_get_plan_cache_size) \
_(aten, _cufft_set_plan_cache_max_size) \
_(aten, _cumprod) \
_(aten, _cumsum) \
_(aten, _denseDims) \
_(aten, _dimI) \
_(aten, _dimV) \
_(aten, _dim_arange) \
_(aten, _dirichlet_grad) \
_(aten, _dot) \
_(aten, _embedding_bag) \
_(aten, _embedding_bag_backward) \
_(aten, _embedding_bag_dense_backward) \
_(aten, _embedding_bag_sparse_backward) \
_(aten, _erf) \
_(aten, _erfc) \
_(aten, _exp) \
_(aten, _expm1) \
_(aten, _fft_with_size) \
_(aten, _fill) \
_(aten, _floor) \
_(aten, _fused_dropout) \
_(aten, _ger) \
_(aten, _indexCopy) \
_(aten, _indices) \
_(aten, _linspace) \
_(aten, _local_scalar) \
_(aten, _local_scalar_dense) \
_(aten, _log) \
_(aten, _log10) \
_(aten, _log1p) \
_(aten, _log2) \
_(aten, _logspace) \
_(aten, _lu_with_info) \
_(aten, _masked_scale) \
_(aten, _mm) \
_(aten, _mv) \
_(aten, _nnz) \
_(aten, _pack_padded_sequence) \
_(aten, _pack_padded_sequence_backward) \
_(aten, _pad_packed_sequence) \
_(aten, _pdist_backward) \
_(aten, _pdist_forward) \
_(aten, _prod) \
_(aten, _prodall) \
_(aten, _range) \
_(aten, _reshape_from_tensor) \
_(aten, _round) \
_(aten, _rsqrt) \
_(aten, _s_where) \
_(aten, _shape_as_tensor) \
_(aten, _sigmoid) \
_(aten, _sigmoid_backward) \
_(aten, _sigmoid_forward) \
_(aten, _sin) \
_(aten, _sinh) \
_(aten, _sparseDims) \
_(aten, _sparse_add) \
_(aten, _sparse_addmm) \
_(aten, _sparse_coo_tensor_with_dims) \
_(aten, _sparse_coo_tensor_with_dims_and_tensors) \
_(aten, _sparse_coo_tensor_unsafe) \
_(aten, _sparse_dense_add) \
_(aten, _sparse_div_scalar) \
_(aten, _sparse_div_zerodim) \
_(aten, _sparse_mul) \
_(aten, _sparse_mul_scalar) \
_(aten, _sparse_mul_zerodim) \
_(aten, _sparse_sum) \
_(aten, _sqrt) \
_(aten, _square) \
_(aten, _standard_gamma) \
_(aten, _standard_gamma_grad) \
_(aten, _sum) \
_(aten, _sum_cuda) \
_(aten, _tan) \
_(aten, _tanh) \
_(aten, _tanh_backward) \
_(aten, _tanh_forward) \
_(aten, _th_baddbmm) \
_(aten, _th_bmm) \
_(aten, _th_get_device) \
_(aten, _th_kthvalue) \
_(aten, _th_median) \
_(aten, _th_mode) \
_(aten, _th_prod) \
_(aten, _th_sigmoid) \
_(aten, _th_std) \
_(aten, _th_sum) \
_(aten, _th_tanh) \
_(aten, _th_var) \
_(aten, _thnn_fused_gru_cell) \
_(aten, _thnn_fused_gru_cell_backward) \
_(aten, _thnn_fused_lstm_cell) \
_(aten, _thnn_fused_lstm_cell_backward) \
_(aten, _trilinear) \
_(aten, _trunc) \
_(aten, _unique) \
_(aten, _unique_dim) \
_(aten, _unsafe_view) \
_(aten, _values) \
_(aten, _weight_norm) \
_(aten, _weight_norm_cuda_interface) \
_(aten, _weight_norm_cuda_interface_backward) \
_(aten, _weight_norm_differentiable_backward) \
_(aten, abs) \
_(aten, acos) \
_(aten, adaptive_avg_pool1d) \
_(aten, adaptive_avg_pool2d) \
_(aten, adaptive_avg_pool2d_backward) \
_(aten, adaptive_avg_pool2d_forward) \
_(aten, adaptive_avg_pool3d) \
_(aten, adaptive_avg_pool3d_backward) \
_(aten, adaptive_avg_pool3d_forward) \
_(aten, adaptive_max_pool1d) \
_(aten, adaptive_max_pool2d) \
_(aten, adaptive_max_pool2d_backward) \
_(aten, adaptive_max_pool2d_forward) \
_(aten, adaptive_max_pool3d) \
_(aten, adaptive_max_pool3d_backward) \
_(aten, adaptive_max_pool3d_forward) \
_(aten, add) \
_(aten, add_) \
_(aten, addbmm) \
_(aten, addcdiv) \
_(aten, addcmul) \
_(aten, addmm) \
_(aten, addmv) \
_(aten, addr) \
_(aten, affine_grid_generator) \
_(aten, affine_grid_generator_backward) \
_(aten, alias) \
_(aten, all) \
_(aten, allclose) \
_(aten, alpha_dropout) \
_(aten, any) \
_(aten, arange) \
_(aten, argmax) \
_(aten, argmin) \
_(aten, as_strided) \
_(aten, as_tensor) \
_(aten, asin) \
_(aten, atan) \
_(aten, atan2) \
_(aten, avg_pool1d) \
_(aten, avg_pool2d) \
_(aten, avg_pool2d_backward) \
_(aten, avg_pool2d_forward) \
_(aten, avg_pool3d) \
_(aten, avg_pool3d_backward) \
_(aten, avg_pool3d_forward) \
_(aten, baddbmm) \
_(aten, bartlett_window) \
_(aten, batch_norm) \
_(aten, bernoulli) \
_(aten, bilinear) \
_(aten, binary_cross_entropy) \
_(aten, binary_cross_entropy_backward) \
_(aten, binary_cross_entropy_forward) \
_(aten, binary_cross_entropy_with_logits) \
_(aten, binary_cross_entropy_with_logits_backward) \
_(aten, binary_cross_entropy_with_logits_target_backward) \
_(aten, bincount) \
_(aten, blackman_window) \
_(aten, block_diag) \
_(aten, bmm) \
_(aten, broadcast_tensors) \
_(aten, cartesian_prod) \
_(aten, cat) \
_(aten, cauchy) \
_(aten, ceil) \
_(aten, celu) \
_(aten, chain_matmul) \
_(aten, cholesky) \
_(aten, cholesky_inverse) \
_(aten, cholesky_solve) \
_(aten, chunk) \
_(aten, clamp) \
_(aten, clamp_max) \
_(aten, clamp_min) \
_(aten, clone) \
_(aten, coalesce) \
_(aten, combinations) \
_(aten, constant_pad_nd) \
_(aten, contiguous) \
_(aten, conv1d) \
_(aten, conv2d) \
_(aten, conv3d) \
_(aten, conv_tbc) \
_(aten, conv_tbc_backward) \
_(aten, conv_transpose1d) \
_(aten, convolution) \
_(aten, copy_sparse_to_sparse) \
_(aten, cos) \
_(aten, cosh) \
_(aten, cosine_embedding_loss) \
_(aten, cosine_similarity) \
_(aten, cross) \
_(aten, std_mean) \
_(aten, var_mean) \
_(aten, ctc_loss) \
_(aten, cudnn_affine_grid_generator) \
_(aten, cudnn_affine_grid_generator_backward) \
_(aten, cudnn_batch_norm) \
_(aten, cudnn_batch_norm_backward) \
_(aten, cudnn_convolution) \
_(aten, cudnn_convolution_backward) \
_(aten, cudnn_convolution_backward_bias) \
_(aten, cudnn_convolution_backward_input) \
_(aten, cudnn_convolution_backward_weight) \
_(aten, cudnn_convolution_transpose) \
_(aten, cudnn_convolution_transpose_backward) \
_(aten, cudnn_convolution_transpose_backward_bias) \
_(aten, cudnn_convolution_transpose_backward_input) \
_(aten, cudnn_convolution_transpose_backward_weight) \
_(aten, cudnn_grid_sampler) \
_(aten, cudnn_grid_sampler_backward) \
_(aten, cudnn_is_acceptable) \
_(aten, cummax) \
_(aten, cummin) \
_(aten, cumprod) \
_(aten, cumsum) \
_(aten, data_ptr) \
_(aten, deg2rad) \
_(aten, det) \
_(aten, detach) \
_(aten, diag) \
_(aten, diag_embed) \
_(aten, diagflat) \
_(aten, diagonal) \
_(aten, fill_diagonal_) \
_(aten, digamma) \
_(aten, dim) \
_(aten, dist) \
_(aten, div) \
_(aten, div_) \
_(aten, dot) \
_(aten, dropout) \
_(aten, eig) \
_(aten, einsum) \
_(aten, elu) \
_(aten, elu_backward) \
_(aten, elu_forward) \
_(aten, embedding) \
_(aten, embedding_backward) \
_(aten, embedding_bag) \
_(aten, embedding_dense_backward) \
_(aten, embedding_renorm) \
_(aten, embedding_sparse_backward) \
_(aten, empty) \
_(aten, empty_like) \
_(aten, empty_strided) \
_(aten, eq) \
_(aten, equal) \
_(aten, erf) \
_(aten, erfc) \
_(aten, erfinv) \
_(aten, exp) \
_(aten, expand) \
_(aten, expand_as) \
_(aten, expm1) \
_(aten, exponential) \
_(aten, eye) \
_(aten, feature_alpha_dropout) \
_(aten, feature_dropout) \
_(aten, fft) \
_(aten, fill) \
_(aten, flatten) \
_(aten, flip) \
_(aten, fliplr) \
_(aten, flipud) \
_(aten, floor) \
_(aten, fmod) \
_(aten, fmod_) \
_(aten, frac) \
_(aten, fractional_max_pool2d) \
_(aten, fractional_max_pool2d_backward) \
_(aten, fractional_max_pool2d_forward) \
_(aten, frobenius_norm) \
_(aten, full) \
_(aten, full_like) \
_(aten, gather) \
_(aten, ge) \
_(aten, gelu) \
_(aten, geometric) \
_(aten, geqrf) \
_(aten, ger) \
_(aten, get_device) \
_(aten, glu) \
_(aten, glu_backward) \
_(aten, glu_forward) \
_(aten, grid_sampler) \
_(aten, grid_sampler_2d) \
_(aten, grid_sampler_2d_backward) \
_(aten, grid_sampler_3d) \
_(aten, grid_sampler_3d_backward) \
_(aten, group_norm) \
_(aten, gru) \
_(aten, gru_cell) \
_(aten, gt) \
_(aten, hamming_window) \
_(aten, hann_window) \
_(aten, hardshrink) \
_(aten, hardshrink_backward) \
_(aten, hardsigmoid) \
_(aten, hardsigmoid_backward) \
_(aten, hardtanh) \
_(aten, hardtanh_backward) \
_(aten, hardtanh_forward) \
_(aten, hinge_embedding_loss) \
_(aten, histc) \
_(aten, hspmm) \
_(aten, ifft) \
_(aten, index) \
_(aten, index_add) \
_(aten, index_copy) \
_(aten, index_fill) \
_(aten, index_put) \
_(aten, index_select) \
_(aten, indices) \
_(aten, instance_norm) \
_(aten, inverse) \
_(aten, irfft) \
_(aten, is_coalesced) \
_(aten, is_complex) \
_(aten, is_contiguous) \
_(aten, is_cuda) \
_(aten, is_distributed) \
_(aten, is_floating_point) \
_(aten, is_nonzero) \
_(aten, is_same_size) \
_(aten, is_set_to) \
_(aten, is_signed) \
_(aten, is_sparse) \
_(aten, isclose) \
_(aten, istft) \
_(aten, kl_div) \
_(aten, kl_div_backward) \
_(aten, kthvalue) \
_(aten, l1_loss) \
_(aten, l1_loss_backward) \
_(aten, l1_loss_forward) \
_(aten, layer_norm) \
_(aten, le) \
_(aten, leaky_relu) \
_(aten, leaky_relu_backward) \
_(aten, leaky_relu_forward) \
_(aten, lerp) \
_(aten, lgamma) \
_(aten, linear) \
_(aten, linspace) \
_(aten, log) \
_(aten, log10) \
_(aten, log1p) \
_(aten, log2) \
_(aten, log_normal) \
_(aten, log_sigmoid) \
_(aten, log_sigmoid_backward) \
_(aten, log_sigmoid_forward) \
_(aten, log_softmax) \
_(aten, _log_softmax) \
_(aten, _log_softmax_backward_data) \
_(aten, logcumsumexp) \
_(aten, logdet) \
_(aten, logspace) \
_(aten, logsumexp) \
_(aten, lstm) \
_(aten, lstm_cell) \
_(aten, lstsq) \
_(aten, lt) \
_(aten, lu_solve) \
_(aten, margin_ranking_loss) \
_(aten, masked_fill) \
_(aten, masked_scatter) \
_(aten, masked_select) \
_(aten, matmul) \
_(aten, matrix_power) \
_(aten, matrix_rank) \
_(aten, matrix_exp) \
_(aten, max) \
_(aten, max_pool1d) \
_(aten, max_pool1d_with_indices) \
_(aten, max_pool2d) \
_(aten, max_pool2d_with_indices) \
_(aten, max_pool2d_with_indices_backward) \
_(aten, max_pool2d_with_indices_forward) \
_(aten, max_pool3d) \
_(aten, max_pool3d_with_indices) \
_(aten, max_pool3d_with_indices_backward) \
_(aten, max_pool3d_with_indices_forward) \
_(aten, max_unpool2d) \
_(aten, max_unpool2d_backward) \
_(aten, max_unpool2d_forward) \
_(aten, max_unpool3d) \
_(aten, max_unpool3d_backward) \
_(aten, max_unpool3d_forward) \
_(aten, max_values) \
_(aten, mean) \
_(aten, median) \
_(aten, meshgrid) \
_(aten, min) \
_(aten, min_values) \
_(aten, miopen_batch_norm) \
_(aten, miopen_batch_norm_backward) \
_(aten, miopen_convolution) \
_(aten, miopen_convolution_backward) \
_(aten, miopen_convolution_backward_bias) \
_(aten, miopen_convolution_backward_input) \
_(aten, miopen_convolution_backward_weight) \
_(aten, miopen_convolution_transpose) \
_(aten, miopen_convolution_transpose_backward) \
_(aten, miopen_convolution_transpose_backward_input) \
_(aten, miopen_convolution_transpose_backward_weight) \
_(aten, miopen_depthwise_convolution) \
_(aten, miopen_depthwise_convolution_backward) \
_(aten, miopen_depthwise_convolution_backward_input) \
_(aten, miopen_depthwise_convolution_backward_weight) \
_(aten, miopen_rnn) \
_(aten, miopen_rnn_backward) \
_(aten, mkldnn_convolution) \
_(aten, mkldnn_convolution_backward) \
_(aten, mkldnn_convolution_backward_input) \
_(aten, mkldnn_convolution_backward_weights) \
_(aten, mm) \
_(aten, mode) \
_(aten, mse_loss) \
_(aten, mse_loss_backward) \
_(aten, mse_loss_forward) \
_(aten, mul) \
_(aten, mul_) \
_(aten, multi_margin_loss) \
_(aten, multi_margin_loss_backward) \
_(aten, multi_margin_loss_forward) \
_(aten, multilabel_margin_loss) \
_(aten, multilabel_margin_loss_backward) \
_(aten, multilabel_margin_loss_forward) \
_(aten, multinomial) \
_(aten, mv) \
_(aten, mvlgamma) \
_(aten, narrow) \
_(aten, narrow_copy) \
_(aten, native_batch_norm) \
_(aten, native_batch_norm_backward) \
_(aten, native_clone) \
_(aten, native_get_device) \
_(aten, native_norm) \
_(aten, native_pow) \
_(aten, native_resize_as) \
_(aten, native_tensor) \
_(aten, native_zero) \
_(aten, ne) \
_(aten, neg) \
_(aten, bitwise_and) \
_(aten, bitwise_not) \
_(aten, bitwise_or) \
_(aten, bitwise_xor) \
_(aten, element_size) \
_(aten, nll_loss) \
_(aten, nll_loss2d) \
_(aten, nll_loss2d_backward) \
_(aten, nll_loss2d_forward) \
_(aten, nll_loss_backward) \
_(aten, nll_loss_forward) \
_(aten, nonzero) \
_(aten, norm) \
_(aten, norm_except_dim) \
_(aten, normal) \
_(aten, nuclear_norm) \
_(aten, numel) \
_(aten, ones) \
_(aten, ones_like) \
_(aten, orgqr) \
_(aten, ormqr) \
_(aten, pairwise_distance) \
_(aten, _euclidean_dist) \
_(aten, pdist) \
_(aten, cdist) \
_(aten, permute) \
_(aten, pin_memory) \
_(aten, pinverse) \
_(aten, pixel_shuffle) \
_(aten, poisson) \
_(aten, polygamma) \
_(aten, pow) \
_(aten, prelu) \
_(aten, prelu_backward) \
_(aten, prod) \
_(aten, put) \
_(aten, qr) \
_(aten, rad2deg) \
_(aten, rand) \
_(aten, rand_like) \
_(aten, randint) \
_(aten, randint_like) \
_(aten, randn) \
_(aten, randn_like) \
_(aten, random) \
_(aten, randperm) \
_(aten, range) \
_(aten, reciprocal) \
_(aten, reflection_pad1d) \
_(aten, reflection_pad1d_backward) \
_(aten, reflection_pad1d_forward) \
_(aten, reflection_pad2d) \
_(aten, reflection_pad2d_backward) \
_(aten, reflection_pad2d_forward) \
_(aten, relu) \
_(aten, remainder) \
_(aten, renorm) \
_(aten, repeat) \
_(aten, replication_pad1d) \
_(aten, replication_pad1d_backward) \
_(aten, replication_pad1d_forward) \
_(aten, replication_pad2d) \
_(aten, replication_pad2d_backward) \
_(aten, replication_pad2d_forward) \
_(aten, replication_pad3d) \
_(aten, replication_pad3d_backward) \
_(aten, replication_pad3d_forward) \
_(aten, reshape) \
_(aten, reshape_as) \
_(aten, resize) \
_(aten, resize_) \
_(aten, resize_as) \
_(aten, resize_as_) \
_(aten, rfft) \
_(aten, rnn_relu) \
_(aten, rnn_relu_cell) \
_(aten, rnn_tanh) \
_(aten, rnn_tanh_cell) \
_(aten, rot90) \
_(aten, round) \
_(aten, rrelu) \
_(aten, rrelu_with_noise) \
_(aten, rrelu_with_noise_backward) \
_(aten, rrelu_with_noise_forward) \
_(aten, rsqrt) \
_(aten, scatter) \
_(aten, scatter_add) \
_(aten, select) \
_(aten, selu) \
_(aten, set) \
_(aten, sigmoid) \
_(aten, sign) \
_(aten, sin) \
_(aten, sinh) \
_(aten, size) \
_(aten, sizes) \
_(aten, slice) \
_(aten, slogdet) \
_(aten, smm) \
_(aten, smooth_l1_loss) \
_(aten, smooth_l1_loss_backward) \
_(aten, smooth_l1_loss_forward) \
_(aten, soft_margin_loss) \
_(aten, soft_margin_loss_backward) \
_(aten, soft_margin_loss_forward) \
_(aten, softmax) \
_(aten, _softmax) \
_(aten, _softmax_backward_data) \
_(aten, softplus) \
_(aten, softplus_backward) \
_(aten, softplus_forward) \
_(aten, softshrink) \
_(aten, softshrink_backward) \
_(aten, softshrink_forward) \
_(aten, solve) \
_(aten, sort) \
_(aten, sparse_coo_tensor) \
_(aten, sparse_mask) \
_(aten, sparse_resize) \
_(aten, sparse_resize_and_clear) \
_(aten, split) \
_(aten, split_with_sizes) \
_(aten, sqrt) \
_(aten, square) \
_(aten, squeeze) \
_(aten, sspaddmm) \
_(aten, stack) \
_(aten, std) \
_(aten, stft) \
_(aten, storage_offset) \
_(aten, stride) \
_(aten, strides) \
_(aten, sub) \
_(aten, sub_) \
_(aten, rsub) \
_(aten, sum) \
_(aten, sum_to_size) \
_(aten, svd) \
_(aten, symeig) \
_(aten, t) \
_(aten, take) \
_(aten, tan) \
_(aten, tanh) \
_(aten, tensor) \
_(aten, tensordot) \
_(aten, th_addmm) \
_(aten, th_clone) \
_(aten, th_norm) \
_(aten, th_pow) \
_(aten, th_resize_as) \
_(aten, th_tensor) \
_(aten, th_zero) \
_(aten, thnn_conv2d) \
_(aten, thnn_conv2d_backward) \
_(aten, thnn_conv2d_forward) \
_(aten, slow_conv3d) \
_(aten, slow_conv3d_backward) \
_(aten, slow_conv3d_forward) \
_(aten, thnn_conv_depthwise2d) \
_(aten, thnn_conv_depthwise2d_backward) \
_(aten, thnn_conv_depthwise2d_forward) \
_(aten, slow_conv_dilated2d) \
_(aten, slow_conv_dilated2d_backward) \
_(aten, slow_conv_dilated3d) \
_(aten, slow_conv_dilated3d_backward) \
_(aten, slow_conv_transpose2d) \
_(aten, slow_conv_transpose2d_backward) \
_(aten, slow_conv_transpose3d) \
_(aten, slow_conv_transpose3d_backward) \
_(aten, threshold) \
_(aten, threshold_backward) \
_(aten, to) \
_(aten, to_sparse) \
_(aten, to_dense) \
_(aten, topk) \
_(aten, trace) \
_(aten, transpose) \
_(aten, triangular_solve) \
_(aten, tril) \
_(aten, triplet_margin_loss) \
_(aten, triu) \
_(aten, trunc) \
_(aten, type_as) \
_(aten, unbind) \
_(aten, unfold) \
_(aten, uniform) \
_(aten, unsqueeze) \
_(aten, upsample_bilinear2d) \
_(aten, upsample_bilinear2d_backward) \
_(aten, upsample_bilinear2d_forward) \
_(aten, upsample_bicubic2d) \
_(aten, upsample_bicubic2d_backward) \
_(aten, upsample_bicubic2d_forward) \
_(aten, upsample_linear1d) \
_(aten, upsample_linear1d_backward) \
_(aten, upsample_linear1d_forward) \
_(aten, upsample_nearest1d) \
_(aten, upsample_nearest1d_backward) \
_(aten, upsample_nearest1d_forward) \
_(aten, upsample_nearest2d) \
_(aten, upsample_nearest2d_backward) \
_(aten, upsample_nearest2d_forward) \
_(aten, upsample_nearest3d) \
_(aten, upsample_nearest3d_backward) \
_(aten, upsample_nearest3d_forward) \
_(aten, upsample_trilinear3d) \
_(aten, upsample_trilinear3d_backward) \
_(aten, upsample_trilinear3d_forward) \
_(aten, values) \
_(aten, vander) \
_(aten, var) \
_(aten, view) \
_(aten, view_as) \
_(aten, where) \
_(aten, zero) \
_(aten, zeros) \
_(aten, zeros_like) \
_(aten, real) \
_(aten, imag) \
_(aten, view_as_real) \
_(aten, view_as_complex) \
/* nothing */

#define FORALL_ATTR_BASE_SYMBOLS(_) \
_(attr, A) \
_(attr, C) \
_(attr, H) \
_(attr, LU_data) \
_(attr, LU_pivots) \
_(attr, N) \
_(attr, W) \
_(attr, accumulate) \
_(attr, align_corners) \
_(attr, alpha) \
_(attr, anchor) \
_(attr, argmaxes) \
_(attr, atol) \
_(attr, b_hh) \
_(attr, b_ih) \
_(attr, bag_size) \
_(attr, base) \
_(attr, batch1) \
_(attr, batch2) \
_(attr, batch_first) \
_(attr, batch_sizes) \
_(attr, benchmark) \
_(attr, beta) \
_(attr, bias) \
_(attr, bias_defined) \
_(attr, bidirectional) \
_(attr, bins) \
_(attr, blank) \
_(attr, buffer) \
_(attr, ceil_mode) \
_(attr, checked_signal_sizes) \
_(attr, chunks) \
_(attr, columns) \
_(attr, complex_input) \
_(attr, complex_output) \
_(attr, condition) \
_(attr, count_include_pad) \
_(attr, cudnn_enable) \
_(attr, cudnn_enabled) \
_(attr, cx) \
_(attr, cy) \
_(attr, data) \
_(attr, dense_dim) \
_(attr, descending) \
_(attr, deterministic) \
_(attr, device) \
_(attr, diagonal) \
_(attr, dilation) \
_(attr, dim) \
_(attr, dim0) \
_(attr, dim1) \
_(attr, dim2) \
_(attr, dimension) \
_(attr, dims) \
_(attr, dims_other) \
_(attr, dims_self) \
_(attr, divisor_override) \
_(attr, dropout) \
_(attr, dropout_seed) \
_(attr, dropout_state) \
_(attr, dtype) \
_(attr, eigenvectors) \
_(attr, end) \
_(attr, end_dim) \
_(attr, eps) \
_(attr, epsilon) \
_(attr, equal_nan) \
_(attr, equation) \
_(attr, expand1) \
_(attr, expand2) \
_(attr, expand3) \
_(attr, exponent) \
_(attr, exponential_average_factor) \
_(attr, fgrad_input) \
_(attr, fill_value) \
_(attr, finput) \
_(attr, from) \
_(attr, g) \
_(attr, gO) \
_(attr, generator) \
_(attr, ggI) \
_(attr, ggW) \
_(attr, ggb) \
_(attr, grad) \
_(attr, gradOutput) \
_(attr, grad_bias) \
_(attr, grad_cy) \
_(attr, grad_hy) \
_(attr, grad_input) \
_(attr, grad_out) \
_(attr, grad_output) \
_(attr, grad_w) \
_(attr, grad_weight) \
_(attr, grid) \
_(attr, groups) \
_(attr, has_bias) \
_(attr, has_biases) \
_(attr, hidden_bias) \
_(attr, hidden_gates) \
_(attr, hidden_size) \
_(attr, high) \
_(attr, hop_length) \
_(attr, hx) \
_(attr, i1) \
_(attr, i2) \
_(attr, i3) \
_(attr, ignore_index) \
_(attr, implicit) \
_(attr, index) \
_(attr, indices) \
_(attr, info) \
_(attr, input) \
_(attr, input1) \
_(attr, input2) \
_(attr, input3) \
_(attr, input_bias) \
_(attr, input_gates) \
_(attr, input_lengths) \
_(attr, input_scale) \
_(attr, input_size) \
_(attr, interpolation_mode) \
_(attr, inverse) \
_(attr, is_target) \
_(attr, k) \
_(attr, keepdim) \
_(attr, kernel_size) \
_(attr, lambd) \
_(attr, largest) \
_(attr, layout) \
_(attr, left) \
_(attr, length) \
_(attr, lengths) \
_(attr, like) \
_(attr, log_alpha) \
_(attr, log_probs) \
_(attr, low) \
_(attr, lower) \
_(attr, lu) \
_(attr, m) \
_(attr, margin) \
_(attr, mask) \
_(attr, mat) \
_(attr, mat1) \
_(attr, mat2) \
_(attr, max) \
_(attr, max_indices) \
_(attr, max_norm) \
_(attr, max_size) \
_(attr, max_val) \
_(attr, max_values) \
_(attr, maximum_indices) \
_(attr, maxnorm) \
_(attr, mean) \
_(attr, median) \
_(attr, min) \
_(attr, min_indices) \
_(attr, min_val) \
_(attr, minlength) \
_(attr, mode) \
_(attr, momentum) \
_(attr, n) \
_(attr, n_fft) \
_(attr, neg_log_likelihood) \
_(attr, negative) \
_(attr, negative_slope) \
_(attr, noise) \
_(attr, non_blocking) \
_(attr, norm_type) \
_(attr, normalized) \
_(attr, normalized_shape) \
_(attr, num_groups) \
_(attr, num_layers) \
_(attr, num_samples) \
_(attr, num_weights) \
_(attr, offset) \
_(attr, offset2bag) \
_(attr, offsets) \
_(attr, ones) \
_(attr, onesided) \
_(attr, options) \
_(attr, other) \
_(attr, output) \
_(attr, output_mask) \
_(attr, output_padding) \
_(attr, output_size) \
_(attr, output_sizes) \
_(attr, p) \
_(attr, pad) \
_(attr, padding) \
_(attr, padding_idx) \
_(attr, padding_mode) \
_(attr, padding_value) \
_(attr, params) \
_(attr, pdist) \
_(attr, cdist) \
_(attr, std_mean) \
_(attr, var_mean) \
_(attr, periodic) \
_(attr, pivot) \
_(attr, pivots) \
_(attr, pooledHeight) \
_(attr, pooledWidth) \
_(attr, positive) \
_(attr, pow) \
_(attr, random_samples) \
_(attr, rcond) \
_(attr, reduction) \
_(attr, repeats) \
_(attr, replacement) \
_(attr, res1) \
_(attr, res2) \
_(attr, res3) \
_(attr, reserve) \
_(attr, result) \
_(attr, return_inverse) \
_(attr, rois) \
_(attr, rtol) \
_(attr, running_mean) \
_(attr, running_var) \
_(attr, save_mean) \
_(attr, save_std) \
_(attr, save_var) \
_(attr, saved_g) \
_(attr, saved_norms) \
_(attr, saved_v) \
_(attr, scale) \
_(attr, scale_grad_by_freq) \
_(attr, self) \
_(attr, self_size) \
_(attr, self_ty) \
_(attr, shape) \
_(attr, sigma) \
_(attr, signal_ndim) \
_(attr, signal_sizes) \
_(attr, size) \
_(attr, solution) \
_(attr, some) \
_(attr, sorted) \
_(attr, source) \
_(attr, sparse) \
_(attr, sparse_dim) \
_(attr, sparse_dtype) \
_(attr, spatialScale) \
_(attr, split_size) \
_(attr, split_sizes) \
_(attr, src) \
_(attr, start) \
_(attr, start_dim) \
_(attr, std) \
_(attr, step) \
_(attr, steps) \
_(attr, storage) \
_(attr, storageOffset) \
_(attr, storage_offset) \
_(attr, stride) \
_(attr, sumdim) \
_(attr, swap) \
_(attr, symmetric) \
_(attr, target) \
_(attr, target_lengths) \
_(attr, targets) \
_(attr, tensor) \
_(attr, tensor1) \
_(attr, tensor2) \
_(attr, tensors) \
_(attr, the_template) \
_(attr, theta) \
_(attr, threshold) \
_(attr, to) \
_(attr, tol) \
_(attr, total) \
_(attr, total_length) \
_(attr, total_weight) \
_(attr, train) \
_(attr, training) \
_(attr, transpose) \
_(attr, transposed) \
_(attr, unbiased) \
_(attr, unitriangular) \
_(attr, unroll_dim) \
_(attr, upper) \
_(attr, upscale_factor) \
_(attr, use_input_stats) \
_(attr, v) \
_(attr, value) \
_(attr, values) \
_(attr, vec) \
_(attr, vec1) \
_(attr, vec2) \
_(attr, w_hh) \
_(attr, w_ih) \
_(attr, weight) \
_(attr, weight_arr) \
_(attr, weight_buf) \
_(attr, weight_size) \
_(attr, weight_stride0) \
_(attr, weights) \
_(attr, win_length) \
_(attr, window) \
_(attr, window_length) \
_(attr, workspace) \
_(attr, x) \
_(attr, x1) \
_(attr, x2)
