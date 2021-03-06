//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKBaseModel.h"

@class ColorTextModel, NSString;

@interface SKSearchPGCLiveModel : SKBaseModel
{
    NSString *_link;
    long long _status;
    NSString *_thumbnail;
    NSString *_title;
    NSString *_view_count;
    NSString *_published;
    ColorTextModel *_icon_lower_left;
    ColorTextModel *_icon_lower_right;
    NSString *_left_BG_color;
    NSString *_left_font_color;
    NSString *_right_BG_color;
    NSString *_right_font_color;
}

@property(copy, nonatomic) NSString *right_font_color; // @synthesize right_font_color=_right_font_color;
@property(copy, nonatomic) NSString *right_BG_color; // @synthesize right_BG_color=_right_BG_color;
@property(copy, nonatomic) NSString *left_font_color; // @synthesize left_font_color=_left_font_color;
@property(copy, nonatomic) NSString *left_BG_color; // @synthesize left_BG_color=_left_BG_color;
@property(retain, nonatomic) ColorTextModel *icon_lower_right; // @synthesize icon_lower_right=_icon_lower_right;
@property(retain, nonatomic) ColorTextModel *icon_lower_left; // @synthesize icon_lower_left=_icon_lower_left;
@property(copy, nonatomic) NSString *published; // @synthesize published=_published;
@property(copy, nonatomic) NSString *view_count; // @synthesize view_count=_view_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

