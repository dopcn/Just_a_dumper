//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_dealshoplist_bin : NVQueryParameter
{
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_dealid;
    NSString *_referid;
    NSNumber *_refertype;
}

@property(copy, nonatomic) NSNumber *refertype; // @synthesize refertype=_refertype;
@property(copy, nonatomic) NSString *referid; // @synthesize referid=_referid;
@property(copy, nonatomic) NSNumber *dealid; // @synthesize dealid=_dealid;
@property(copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

