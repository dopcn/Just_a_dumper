//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseOSShopHighlightDO : NVBaseModel
{
    _Bool _show;
    NSArray *_shopTagList;
    NSArray *_contentList;
    long long _style;
    NSString *_title;
    NSString *_content;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *contentList; // @synthesize contentList=_contentList;
@property(retain, nonatomic) NSArray *shopTagList; // @synthesize shopTagList=_shopTagList;
- (void).cxx_destruct;

@end

