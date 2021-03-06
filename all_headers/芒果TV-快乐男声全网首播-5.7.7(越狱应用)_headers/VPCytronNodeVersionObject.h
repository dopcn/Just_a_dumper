//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface VPCytronNodeVersionObject : NSObject
{
    _Bool _versionRecord;
    NSString *_nodeName;
    NSString *_version;
    NSString *_cdnUrl;
    NSDictionary *_constructorDictionary;
}

@property(nonatomic, getter=isVersionRecord) _Bool versionRecord; // @synthesize versionRecord=_versionRecord;
@property(retain, nonatomic) NSDictionary *constructorDictionary; // @synthesize constructorDictionary=_constructorDictionary;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *nodeName; // @synthesize nodeName=_nodeName;
- (void).cxx_destruct;
- (_Bool)readNodeVersionObjectDictionary:(id)arg1;
- (id)initNodeVersionObjectWithDictionary:(id)arg1;

@end

