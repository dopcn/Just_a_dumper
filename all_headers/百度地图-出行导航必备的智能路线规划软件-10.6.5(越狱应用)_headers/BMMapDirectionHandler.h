//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHandler.h"

@class BMCRAdvanceRoutePlanHelper, NSDictionary;

@interface BMMapDirectionHandler : BaseHandler
{
    NSDictionary *_params;
    BMCRAdvanceRoutePlanHelper *_advanceRoutePlanHelper;
}

@property(retain, nonatomic) BMCRAdvanceRoutePlanHelper *advanceRoutePlanHelper; // @synthesize advanceRoutePlanHelper=_advanceRoutePlanHelper;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (long long)tranferMapOpenApiPreferToBusRoutePrefer:(long long)arg1;
- (id)getAddressFromString:(id)arg1 ct:(id)arg2 inRegion:(id)arg3;
- (_Bool)isFromWeb:(id)arg1;
- (_Bool)isNeedLocation:(id)arg1;
- (_Bool)popToRootPage:(id)arg1;
- (_Bool)isNeedNaviFinishInit:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)preHandleOpenURL:(id)arg1;
- (id)parserOpenUrlEntity:(id)arg1 errorMessage:(id *)arg2;
- (id)parserPoint:(id)arg1 parameters:(id)arg2 isStartPoint:(_Bool)arg3;

@end

