//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class GiftItem, NSString;
@protocol Optional;

@interface GiftpriceItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    GiftItem *_gift;
}

@property(retain, nonatomic) GiftItem *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

