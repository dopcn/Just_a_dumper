//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNHeaderScookieRequest.h"

@interface SNLocalChannelRequest : SNHeaderScookieRequest
{
    struct CLLocationCoordinate2D _locationCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
- (id)sn_parameters;
- (id)sn_requestUrl;
- (long long)sn_requestMethod;
- (id)addLocationDefaultParameters;
- (id)initWithLocationCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

