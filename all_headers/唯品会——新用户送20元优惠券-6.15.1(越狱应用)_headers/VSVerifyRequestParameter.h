//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSString;

@interface VSVerifyRequestParameter : VSEasyAPIRequestParameter
{
    NSString *_uuid;
    NSString *_captcha;
    NSString *_id_number;
    NSString *_receiver;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *receiver; // @synthesize receiver=_receiver;
@property(copy, nonatomic) NSString *id_number; // @synthesize id_number=_id_number;
@property(copy, nonatomic) NSString *captcha; // @synthesize captcha=_captcha;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

