//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, QNPNaquhuaGuideActivateData;

@interface QNPNaquhuaGuide : NSObject
{
    NSString *_isNeedGuide;
    NSArray *_supportPayTypes;
    NSString *_confirmOpenNqhUrl;
    QNPNaquhuaGuideActivateData *_guideActivateData;
}

@property(retain, nonatomic) QNPNaquhuaGuideActivateData *guideActivateData; // @synthesize guideActivateData=_guideActivateData;
@property(retain, nonatomic) NSString *confirmOpenNqhUrl; // @synthesize confirmOpenNqhUrl=_confirmOpenNqhUrl;
@property(retain, nonatomic) NSArray *supportPayTypes; // @synthesize supportPayTypes=_supportPayTypes;
@property(retain, nonatomic) NSString *isNeedGuide; // @synthesize isNeedGuide=_isNeedGuide;
- (void).cxx_destruct;

@end

