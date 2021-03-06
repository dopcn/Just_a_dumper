//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, LTMAOSPoiData, MPSQueryPoiData, NSArray, NSDictionary, NSString, UIView;

@protocol NMGeneralSearchService <NSObject>
- (_Bool)isOnlyShowTipOnMainMap;
- (NSArray *)getOfficialRecommendParkList:(MPSQueryPoiData *)arg1;
- (void)handleOpenSearchPoi:(NSDictionary *)arg1 isDetail:(_Bool)arg2;
- (void)animationWithGeneralSearch;
- (long long)smartScenicBehaviorTypeForCurrentStatus;
- (void)didHightInteractionLayerSuccess:(_Bool)arg1;
- (void)willHightInteractionLayer;
- (_Bool)isCurrentStatusMapAndList;
- (void)addResultPoiToHistory:(MPSQueryPoiData *)arg1;
- (MPSQueryPoiData *)poiFooterViewData;
- (void)externalShowBrandName:(NSDictionary *)arg1 sourceId:(long long)arg2;
- (UIView *)getGeneralSearchMainView;
- (UIView *)getGeneralSearchNaviView;
- (NSString *)inputKeyword;
- (void)prepareForRecievingVAPOIResult:(NSString *)arg1 geoobj:(struct ANRect)arg2 superid:(NSString *)arg3 responseData:(LTMAOSPoiData *)arg4;
- (void)setVASource;
- (void)categoryOpenPOIDetailView:(MPSQueryPoiData *)arg1;
- (void)showPOIFromExternal:(NSDictionary *)arg1 FromManagerID:(long long)arg2;
- (void)magicBoxBrandSearchBy:(NSString *)arg1;
- (void)searchPoiForSemantic:(NSString *)arg1 city:(NSString *)arg2 longitude:(double)arg3 latitude:(double)arg4 category:(NSString *)arg5 range:(long long)arg6 sortrule:(long long)arg7 QueryType:(NSString *)arg8;
- (void)searchPoiForSemantic:(NSString *)arg1 mapG20Rect:(struct ANRect)arg2 autoSearch:(_Bool)arg3;
- (void)requestPoisAroundPoint:(struct ANPoint)arg1 keyword:(NSString *)arg2 fromManagerId:(long long)arg3;
- (void)externalMapControl:(MPSQueryPoiData *)arg1 andCenter:(struct ANPoint)arg2 level:(long long)arg3;
- (_Bool)externalSearchAroundPoi:(MPSQueryPoiData *)arg1 category:(NSString *)arg2 ExternalRequestPara:(NSString *)arg3 IDQDic:(NSDictionary *)arg4;
- (_Bool)externalSearchAroundPoi:(MPSQueryPoiData *)arg1 category:(NSString *)arg2 ExternalRequestPara:(NSString *)arg3;
- (_Bool)externalSearchAroundPoi:(MPSQueryPoiData *)arg1 category:(NSString *)arg2;
- (_Bool)externalSearchAroundPoi:(MPSQueryPoiData *)arg1 aroundSourceType:(long long)arg2;
- (_Bool)externalSearchAroundPoi:(MPSQueryPoiData *)arg1;
- (void)searchSchemePOIFromOtherSource:(NSString *)arg1 mapG20Rect:(struct ANRect)arg2 DirectNavi:(_Bool)arg3 ExternalRequestPara:(NSDictionary *)arg4 sourceApplication:(NSString *)arg5;
- (void)showSinaPoiData:(MPSQueryPoiData *)arg1 withSourceApplication:(NSString *)arg2 needTraffic:(_Bool)arg3;
- (void)showSchemePoiID:(NSString *)arg1 source:(NSString *)arg2 params:(NSDictionary *)arg3;
- (void)showSchemePoiID:(NSString *)arg1 source:(NSString *)arg2;
- (void)showSchemePoiID:(NSString *)arg1 x:(int)arg2 y:(int)arg3 name:(NSString *)arg4 adress:(NSString *)arg5;
- (void)showSpecialPoiData:(MPSQueryPoiData *)arg1 withSourceApplication:(NSString *)arg2;
- (void)showSpecialPoiData:(MPSQueryPoiData *)arg1;
- (void)showInternalPoi:(MPSQueryPoiData *)arg1;
- (void)searchPointForShutcut:(NSString *)arg1;
- (void)hideHighlightedPoint;
- (void)myLocationUpdated:(CLLocation *)arg1;
- (void)showMyLocation:(struct ANPoint)arg1;
- (void)showLongPressPoint:(struct ANPoint)arg1;
- (void)showMapLabel:(NSString *)arg1 poiId:(NSString *)arg2 location:(struct ANPoint)arg3 needHighlight:(_Bool)arg4 subwayInfo:(NSArray *)arg5;
- (unsigned int)behaviorPointSource;
- (void)cancelSearch;
- (void)cancel;
@end

