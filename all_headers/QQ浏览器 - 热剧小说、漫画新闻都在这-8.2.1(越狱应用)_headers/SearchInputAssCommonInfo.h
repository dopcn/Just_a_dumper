//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchInputAssWordRichMediaDataInfo.h"

@class NSString;

@interface SearchInputAssCommonInfo : SearchInputAssWordRichMediaDataInfo
{
    NSString *_sImageUrl;
    long long _eIconStyleType;
}

@property long long eIconStyleType; // @synthesize eIconStyleType=_eIconStyleType;
@property(retain) NSString *sImageUrl; // @synthesize sImageUrl=_sImageUrl;
- (void).cxx_destruct;
- (struct CGSize)iconSize;
- (id)iconUrl;
- (id)strLocalImageIcon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)DataInfoViewWithFrame:(struct CGRect)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

