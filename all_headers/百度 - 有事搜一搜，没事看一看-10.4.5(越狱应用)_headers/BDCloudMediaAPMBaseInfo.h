//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BDCloudMediaAPMBaseInfo : NSObject
{
    NSString *_ak;
    NSString *_url;
    NSString *_vvid;
    NSMutableDictionary *_json;
}

@property(retain, nonatomic) NSMutableDictionary *json; // @synthesize json=_json;
@property(copy, nonatomic) NSString *vvid; // @synthesize vvid=_vvid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *ak; // @synthesize ak=_ak;
- (void).cxx_destruct;
- (id)generateRandomSuffix;
- (id)generateVVID;
- (id)toJSON;
- (void)updateSession:(id)arg1;
- (id)initWithAccessKey:(id)arg1;

@end

