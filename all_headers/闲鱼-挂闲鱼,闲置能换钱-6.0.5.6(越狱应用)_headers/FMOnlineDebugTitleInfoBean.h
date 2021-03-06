//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface FMOnlineDebugTitleInfoBean : NSObject
{
    _Bool _arrow;
    _Bool _seperator;
    NSString *_iconUrl;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_info;
    UIColor *_infoColor;
    UIFont *_infoFont;
    NSString *_actionURL;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(nonatomic) _Bool seperator; // @synthesize seperator=_seperator;
@property(nonatomic) _Bool arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIFont *infoFont; // @synthesize infoFont=_infoFont;
@property(retain, nonatomic) UIColor *infoColor; // @synthesize infoColor=_infoColor;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (id)init;

@end

