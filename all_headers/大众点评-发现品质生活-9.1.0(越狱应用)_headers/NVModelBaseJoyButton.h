//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseJoyButton : NVBaseModel
{
    NSString *_gaElement;
    NSString *_buttonURL;
    long long _buttonType;
    NSString *_buttonText;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(copy, nonatomic) NSString *buttonURL; // @synthesize buttonURL=_buttonURL;
@property(copy, nonatomic) NSString *gaElement; // @synthesize gaElement=_gaElement;
- (void).cxx_destruct;

@end

