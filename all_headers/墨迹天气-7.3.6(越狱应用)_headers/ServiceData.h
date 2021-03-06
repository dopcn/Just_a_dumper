//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface ServiceData : MTLModel <MTLJSONSerializing>
{
    NSString *_adCode;
    NSString *_serviceIconUrl;
    long long _serviceID;
    NSString *_serviceName;
    NSString *_serviceShortName;
    NSString *_serviceUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *serviceUrl; // @synthesize serviceUrl=_serviceUrl;
@property(copy, nonatomic) NSString *serviceShortName; // @synthesize serviceShortName=_serviceShortName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) long long serviceID; // @synthesize serviceID=_serviceID;
@property(copy, nonatomic) NSString *serviceIconUrl; // @synthesize serviceIconUrl=_serviceIconUrl;
@property(copy, nonatomic) NSString *adCode; // @synthesize adCode=_adCode;
- (void).cxx_destruct;

@end

