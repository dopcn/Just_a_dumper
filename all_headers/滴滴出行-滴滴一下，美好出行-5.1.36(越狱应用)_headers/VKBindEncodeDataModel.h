//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface VKBindEncodeDataModel : NSObject
{
    NSString *_bindEncodeDataString;
    NSString *_origin;
    NSNumber *_gid;
    NSNumber *_role;
}

@property(readonly, copy, nonatomic) NSNumber *role; // @synthesize role=_role;
@property(readonly, copy, nonatomic) NSNumber *gid; // @synthesize gid=_gid;
@property(readonly, copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(readonly, copy, nonatomic) NSString *bindEncodeDataString; // @synthesize bindEncodeDataString=_bindEncodeDataString;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBindEncodeDataString:(id)arg1;

@end

