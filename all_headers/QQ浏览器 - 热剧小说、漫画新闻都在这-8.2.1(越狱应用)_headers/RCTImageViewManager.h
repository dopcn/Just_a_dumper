//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTImageViewManager : RCTViewManager
{
}

+ (id)propConfig_nightMode;
+ (id)propConfig_noPicMode;
+ (id)propConfig_tintColors;
+ (id)propConfig_backgroundColors;
+ (id)__rct_export__801;
+ (id)__rct_export__510;
+ (id)propConfig_tintColor;
+ (id)propConfig_source;
+ (id)propConfig_resizeMode;
+ (id)propConfig_onLoadEnd;
+ (id)propConfig_onLoad;
+ (id)propConfig_onPartialLoad;
+ (id)propConfig_onError;
+ (id)propConfig_onProgress;
+ (id)propConfig_onLoadStart;
+ (id)propConfig_defaultSource;
+ (id)propConfig_capInsets;
+ (id)propConfig_blurRadius;
+ (void)load;
+ (id)moduleName;
- (void)set_tintColors:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_backgroundColors:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)prefetchImage:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)getSize:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;

@end

