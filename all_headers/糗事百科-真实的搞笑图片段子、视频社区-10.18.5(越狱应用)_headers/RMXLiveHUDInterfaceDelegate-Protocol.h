//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol RMXLiveHUDInterfaceDelegate <NSObject>
+ (void)hideAllHUDs;
+ (void)showLoadingStatusHUDWithTextString:(NSString *)arg1 inView:(UIView *)arg2;
+ (void)showLoadingStatusHUDWithTextString:(NSString *)arg1;
+ (void)postTextString:(NSString *)arg1 completionBlocK:(void (^)(void))arg2;
+ (void)postQoSStatusText:(NSString *)arg1;
+ (void)postLoadingStatusHUDWithTextString:(NSString *)arg1 WhileExecutingBlock:(void (^)(void))arg2;
+ (void)postLoadingStatusHUDWhileExecutingBlock:(void (^)(void))arg1;
+ (void)postTextString:(NSString *)arg1 hiddenAfterDelay:(double)arg2;
+ (void)postTextString:(NSString *)arg1;
+ (void)postLoadingStatusHUDWithTextString:(NSString *)arg1 progress:(double)arg2;
@end

