//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface FollowPopup : UIView
{
    NSString *_screenName;
    NSString *_text;
    CDUnknownBlockType _wantToOpenBlock;
    long long _type;
}

+ (id)userDefaultsKeyWithType:(long long)arg1;
+ (_Bool)toCreateNewPopupOrNotWithType:(long long)arg1;
+ (id)showOpenOverfrequencyPushWithAction:(CDUnknownBlockType)arg1 text:(id)arg2;
+ (id)showFrom:(id)arg1 type:(long long)arg2;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType wantToOpenBlock; // @synthesize wantToOpenBlock=_wantToOpenBlock;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
- (void).cxx_destruct;
- (void)safeRemove;
- (void)openOverfrequencyPush_stillOpen;
- (void)openOverfrequencyPush_donotOpen;
- (void)firstFollowPopup_showAgain:(id)arg1;
- (void)firstFollowPopup_gotoSettings;
- (void)closeDidClick;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 text:(id)arg3;

@end

