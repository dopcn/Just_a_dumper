//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseTemplateModel.h"

@class NSArray, NSString;

@interface WBYPDetailBussinessInfoModel : WBDetailBaseTemplateModel
{
    NSString *_title;
    NSArray *_tags;
    NSString *_icon_url;
    NSString *_tag_icon_url;
    NSString *_tag_ranking;
    NSString *_check400;
    NSArray *_infolist;
    NSArray *_ranking;
    NSArray *_buttons;
    NSString *_ab_alias;
}

@property(copy, nonatomic) NSString *ab_alias; // @synthesize ab_alias=_ab_alias;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *ranking; // @synthesize ranking=_ranking;
@property(retain, nonatomic) NSArray *infolist; // @synthesize infolist=_infolist;
@property(copy, nonatomic) NSString *check400; // @synthesize check400=_check400;
@property(copy, nonatomic) NSString *tag_ranking; // @synthesize tag_ranking=_tag_ranking;
@property(copy, nonatomic) NSString *tag_icon_url; // @synthesize tag_icon_url=_tag_icon_url;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

