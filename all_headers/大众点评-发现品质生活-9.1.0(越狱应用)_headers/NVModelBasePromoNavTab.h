//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBasePromoNavTab : NVBaseModel
{
    long long _category_Id;
    NSString *_selectedTitle;
    NSString *_tabName;
    NSString *_tag;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(nonatomic) long long category_Id; // @synthesize category_Id=_category_Id;
- (void).cxx_destruct;

@end

