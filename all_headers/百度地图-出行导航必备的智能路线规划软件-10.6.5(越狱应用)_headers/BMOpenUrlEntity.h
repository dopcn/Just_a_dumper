//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface BMOpenUrlEntity : NSObject
{
    NSString *_sourceApplication;
    id _annotation;
    NSURL *_origionURL;
    NSDictionary *_parameters;
    NSString *_url;
    NSString *_scheme;
    NSMutableDictionary *_extparams;
    NSString *_srcBackurl;
    NSString *_srcAppname;
}

@property(retain, nonatomic) NSString *srcAppname; // @synthesize srcAppname=_srcAppname;
@property(retain, nonatomic) NSString *srcBackurl; // @synthesize srcBackurl=_srcBackurl;
@property(retain, nonatomic) NSMutableDictionary *extparams; // @synthesize extparams=_extparams;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSURL *origionURL; // @synthesize origionURL=_origionURL;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
- (void).cxx_destruct;

@end

