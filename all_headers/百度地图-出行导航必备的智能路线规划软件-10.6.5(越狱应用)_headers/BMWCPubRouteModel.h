//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BMWCPubRouteModel : NSObject
{
    NSString *_firstIconUrl;
    NSString *_secondIconUrl;
    NSString *_tip;
    NSString *_linkUrl;
    NSString *_extraInfo;
    NSString *_needReq;
}

@property(copy, nonatomic) NSString *needReq; // @synthesize needReq=_needReq;
@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *secondIconUrl; // @synthesize secondIconUrl=_secondIconUrl;
@property(copy, nonatomic) NSString *firstIconUrl; // @synthesize firstIconUrl=_firstIconUrl;
- (void).cxx_destruct;
- (id)init;

@end

