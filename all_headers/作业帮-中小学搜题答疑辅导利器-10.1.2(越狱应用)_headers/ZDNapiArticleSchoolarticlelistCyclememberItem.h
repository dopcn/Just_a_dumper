//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSString;
@protocol Optional;

@interface ZDNapiArticleSchoolarticlelistCyclememberItem : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    NSString *_uname;
    long long _sex;
    long long _uid;
    NSString *_avatar;
}

@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;

@end

