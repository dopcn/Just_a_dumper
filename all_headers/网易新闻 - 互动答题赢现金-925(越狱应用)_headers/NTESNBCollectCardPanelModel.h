//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTESNBCollectCardPanelModel : NSObject
{
    unsigned long long _modelType;
    NSString *_cardName;
    NSString *_shareUrl;
    NSString *_largeCardText;
    NSString *_cardSmallImageUrl;
    NSString *_cardLargeImageUrl;
    NSString *_largeBackgroundImageUrl;
    NSString *_prizeImageUrl;
    NSString *_activityImageUrl;
    NSString *_activityButtonText;
    NSString *_activityNoInterestText;
    NSString *_activityUrl;
}

@property(copy, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(copy, nonatomic) NSString *activityNoInterestText; // @synthesize activityNoInterestText=_activityNoInterestText;
@property(copy, nonatomic) NSString *activityButtonText; // @synthesize activityButtonText=_activityButtonText;
@property(copy, nonatomic) NSString *activityImageUrl; // @synthesize activityImageUrl=_activityImageUrl;
@property(copy, nonatomic) NSString *prizeImageUrl; // @synthesize prizeImageUrl=_prizeImageUrl;
@property(copy, nonatomic) NSString *largeBackgroundImageUrl; // @synthesize largeBackgroundImageUrl=_largeBackgroundImageUrl;
@property(copy, nonatomic) NSString *cardLargeImageUrl; // @synthesize cardLargeImageUrl=_cardLargeImageUrl;
@property(copy, nonatomic) NSString *cardSmallImageUrl; // @synthesize cardSmallImageUrl=_cardSmallImageUrl;
@property(copy, nonatomic) NSString *largeCardText; // @synthesize largeCardText=_largeCardText;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
- (_Bool)shouldShowLargeCard:(id)arg1;
- (_Bool)shouldShowSmallCard:(id)arg1;
- (_Bool)shouldShowUnloginView:(id)arg1;
- (_Bool)hasImageForUrl:(id)arg1;
- (id)initWithCardObject:(id)arg1;

@end

