//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseAreaItem : NVBaseModel
{
    NSArray *_subItems;
    NSString *_pinyin;
    NSString *_name;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSArray *subItems; // @synthesize subItems=_subItems;
- (void).cxx_destruct;

@end

