//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PlacementHierarchyConfig : NSObject
{
    long long _updatedTime;
    NSString *_url;
}

+ (id)parseJsonObj:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long updatedTime; // @synthesize updatedTime=_updatedTime;
- (void).cxx_destruct;
- (void)dump;
- (id)getUrl;
- (long long)getUpdatedTime;
- (id)init;

@end

