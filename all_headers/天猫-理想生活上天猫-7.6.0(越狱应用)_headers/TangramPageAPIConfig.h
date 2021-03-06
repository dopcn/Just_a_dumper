//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TBMTOPRequest, UIView;
@protocol TangramLayoutProtocol;

@interface TangramPageAPIConfig : NSObject
{
    NSString *_apiName;
    TBMTOPRequest *_request;
    UIView<TangramLayoutProtocol> *_layout;
    NSDictionary *_basicParams;
    NSDictionary *_bizParams;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *bizParams; // @synthesize bizParams=_bizParams;
@property(retain, nonatomic) NSDictionary *basicParams; // @synthesize basicParams=_basicParams;
@property(nonatomic) __weak UIView<TangramLayoutProtocol> *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) TBMTOPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (id)initWithAPIName:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

