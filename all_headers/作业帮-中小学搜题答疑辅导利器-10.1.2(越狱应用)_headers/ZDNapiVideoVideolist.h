//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString;
@protocol Optional, ZDNapiVideoVideolistCruceslistItem, ZDNapiVideoVideolistOriginItem;

@interface ZDNapiVideoVideolist : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSArray<ZDNapiVideoVideolistOriginItem> *_origin;
    NSArray<ZDNapiVideoVideolistCruceslistItem> *_cruceslist;
    NSString *_categroy;
}

@property(retain, nonatomic) NSString *categroy; // @synthesize categroy=_categroy;
@property(retain, nonatomic) NSArray<ZDNapiVideoVideolistCruceslistItem> *cruceslist; // @synthesize cruceslist=_cruceslist;
@property(retain, nonatomic) NSArray<ZDNapiVideoVideolistOriginItem> *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

