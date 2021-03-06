#include <MPM/MpmParticleHandleBase.cpp>
namespace ZIRAN {
template class MpmParticleHandleBase<double, 2>;
extern template class MpmForceBase<double, 2>;
template void MpmParticleHandleBase<double, 2>::addJBasedMpmForce<QuadraticVolumePenalty<double, 2>>(QuadraticVolumePenalty<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFJMixedMpmForce<NeoHookeanIsotropic<double, 2>, QuadraticVolumePenalty<double, 2>>(NeoHookeanIsotropic<double, 2> const&, QuadraticVolumePenalty<double, 2> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 2>::addFJMixedMpmForce<StvkWithHenckyIsotropic<double, 2>, QuadraticVolumePenalty<double, 2>>(StvkWithHenckyIsotropic<double, 2> const&, QuadraticVolumePenalty<double, 2> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 2>::addFJMixedMpmForce<CorotatedElasticity<double, 2>, QuadraticVolumePenalty<double, 2>>(CorotatedElasticity<double, 2> const&, QuadraticVolumePenalty<double, 2> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 2>::addFJMixedMpmForce<CorotatedIsotropic<double, 2>, QuadraticVolumePenalty<double, 2>>(CorotatedIsotropic<double, 2> const&, QuadraticVolumePenalty<double, 2> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 2>::addFJMixedMpmForce<LinearCorotated<double, 2>, QuadraticVolumePenalty<double, 2>>(LinearCorotated<double, 2> const&, QuadraticVolumePenalty<double, 2> const&, MATERIAL_PHASE_ENUM, MATERIAL_PROPERTY_ENUM, bool);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForceWithAnisotropicPhaseField<NeoHookeanBorden<double, 2>>(const StdVector<Vector<double, 2>>, const StdVector<double>, const double&, const double&, NeoHookeanBorden<double, 2> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForceWithAnisotropicPhaseField<QRAnisotropic<double, 2>>(const StdVector<Vector<double, 2>>, const StdVector<double>, const double&, const double&, QRAnisotropic<double, 2> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForceWithAnisotropicPhaseField<QRStableNeoHookean<double, 2>>(const StdVector<Vector<double, 2>>, const StdVector<double>, const double&, const double&, QRStableNeoHookean<double, 2> const&, const double, const double, bool, const double);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForceWithPhaseField<NeoHookeanBorden<double, 2>>(const double&, const double&, NeoHookeanBorden<double, 2> const&, bool, const double);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<CorotatedElasticity<double, 2>>(CorotatedElasticity<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<CorotatedIsotropic<double, 2>>(CorotatedIsotropic<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<CorotatedDistortionalDilational<double, 2>>(CorotatedDistortionalDilational<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<CotangentOrthotropic<double, 2>>(CotangentOrthotropic<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<Smudge<double, 2>>(Smudge<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<QRAnisotropic<double, 2>>(QRAnisotropic<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<QRStableNeoHookean<double, 2>>(QRStableNeoHookean<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<LinearElasticity<double, 2>>(LinearElasticity<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<LinearCorotated<double, 2>>(LinearCorotated<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<NeoHookean<double, 2>>(NeoHookean<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<NeoHookeanBorden<double, 2>>(NeoHookeanBorden<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<NeoHookeanIsotropic<double, 2>>(NeoHookeanIsotropic<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<StVenantKirchhoff<double, 2>>(StVenantKirchhoff<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<StvkWithHencky<double, 2>>(StvkWithHencky<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<StvkWithHenckyDecoupled<double, 2>>(StvkWithHenckyDecoupled<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<StvkWithHenckyIsotropic<double, 2>>(StvkWithHenckyIsotropic<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<StvkWithHenckyIsotropicUnilateral<double, 2>>(StvkWithHenckyIsotropicUnilateral<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFBasedMpmForce<SurfaceTension<double, 2>>(SurfaceTension<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addFDecoupledBasedMpmForce<StvkWithHenckyDecoupled<double, 2>>(StvkWithHenckyDecoupled<double, 2> const&, double);
template void MpmParticleHandleBase<double, 2>::addFElasticNonequilibratedBasedMpmForce<StvkWithHencky<double, 2>>(StvkWithHencky<double, 2> const&, double, double);
template void MpmParticleHandleBase<double, 2>::addJBasedMpmForce<EquationOfState<double, 2>>(EquationOfState<double, 2> const&);
template void MpmParticleHandleBase<double, 2>::addPlasticity<CorotatedIsotropic<double, 2>, SnowPlasticity<double>>(CorotatedIsotropic<double, 2> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<CorotatedElasticity<double, 2>, SnowPlasticity<double>>(CorotatedElasticity<double, 2> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<LinearCorotated<double, 2>, SnowPlasticity<double>>(LinearCorotated<double, 2> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHencky<double, 2>, ModifiedCamClay<double>>(StvkWithHencky<double, 2> const&, ModifiedCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, ModifiedCamClay<double>>(StvkWithHenckyIsotropic<double, 2> const&, ModifiedCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<Smudge<double, 2>, DruckerPragerStvkHencky<double>>(Smudge<double, 2> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<Smudge<double, 2>, SmudgePlasticity<double>>(Smudge<double, 2> const&, SmudgePlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<EquationOfState<double, 2>, UnilateralJ<double>>(EquationOfState<double, 2> const&, UnilateralJ<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<NeoHookean<double, 2>, SnowPlasticity<double>>(NeoHookean<double, 2> const&, SnowPlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<NeoHookeanBorden<double, 2>, NonAssociativeCamClay<double>>(NeoHookeanBorden<double, 2> const&, NonAssociativeCamClay<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<NeoHookeanBorden<double, 2>, NonAssociativeVonMises<double>>(NeoHookeanBorden<double, 2> const&, NonAssociativeVonMises<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<NeoHookeanBorden<double, 2>, NonAssociativeDruckerPrager<double>>(NeoHookeanBorden<double, 2> const&, NonAssociativeDruckerPrager<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHencky<double, 2>, DruckerPragerStvkHencky<double>>(StvkWithHencky<double, 2> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHencky<double, 2>, DruckerPragerStrainSoftening<double>>(StvkWithHencky<double, 2> const&, DruckerPragerStrainSoftening<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHencky<double, 2>, VonMisesStvkHencky<double, 2>>(StvkWithHencky<double, 2> const&, VonMisesStvkHencky<double, 2> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<QRStableNeoHookean<double, 2>, VonMisesStvkHencky<double, 2>>(QRStableNeoHookean<double, 2> const&, VonMisesStvkHencky<double, 2> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHencky<double, 2>, VonMisesCapped<double>>(StvkWithHencky<double, 2> const&, VonMisesCapped<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, SmudgePlasticity<double>>(StvkWithHenckyIsotropic<double, 2> const&, SmudgePlasticity<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyDecoupled<double, 2>, DruckerPragerStvkHencky<double>>(StvkWithHenckyDecoupled<double, 2> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyDecoupled<double, 2>, VonMisesStvkHencky<double, 2>>(StvkWithHenckyDecoupled<double, 2> const&, VonMisesStvkHencky<double, 2> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, DruckerPragerStvkHencky<double>>(StvkWithHenckyIsotropic<double, 2> const&, DruckerPragerStvkHencky<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, DruckerPragerStrainSoftening<double>>(StvkWithHenckyIsotropic<double, 2> const&, DruckerPragerStrainSoftening<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, VonMisesStvkHencky<double, 2>>(StvkWithHenckyIsotropic<double, 2> const&, VonMisesStvkHencky<double, 2> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropic<double, 2>, VonMisesCapped<double>>(StvkWithHenckyIsotropic<double, 2> const&, VonMisesCapped<double> const&, std::string);
template void MpmParticleHandleBase<double, 2>::addPlasticity<StvkWithHenckyIsotropicUnilateral<double, 2>, DruckerPragerStvkHencky<double>>(StvkWithHenckyIsotropicUnilateral<double, 2> const&, DruckerPragerStvkHencky<double> const&, std::string);
} // namespace ZIRAN
