//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface QQPimSettingItem : NSObject
{
    _Bool _shouldShowTips;
    _Bool _forShowing;
    int _type;
    int _subtype;
    NSString *_title;
    NSString *_subtitle;
    NSString *_icon;
    NSMutableArray *_subItems;
    UIImage *_customIconImage;
}

+ (id)settingItemWithTitle:(id)arg1 Icon:(id)arg2 SettingType:(int)arg3;
@property(nonatomic) _Bool forShowing; // @synthesize forShowing=_forShowing;
@property(retain, nonatomic) UIImage *customIconImage; // @synthesize customIconImage=_customIconImage;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(retain, nonatomic) NSMutableArray *subItems; // @synthesize subItems=_subItems;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)subItemWithSubType:(int)arg1;
- (_Bool)isAvailable;
- (void)markNoNeedToShowTips;
- (void)setShouldShowTips:(_Bool)arg1;
- (_Bool)shouldShowTips;
- (id)init;

@end

