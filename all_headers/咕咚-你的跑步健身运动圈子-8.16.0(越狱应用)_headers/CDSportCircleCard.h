//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDCommonPicture, NSString;

@interface CDSportCircleCard : NSObject
{
    NSString *_cardTitle;
    NSString *_cardContent;
    NSString *_cardUrl;
    CDCommonPicture *_cardPicture;
    NSString *_cardShareUrl;
}

@property(copy, nonatomic) NSString *cardShareUrl; // @synthesize cardShareUrl=_cardShareUrl;
@property(retain, nonatomic) CDCommonPicture *cardPicture; // @synthesize cardPicture=_cardPicture;
@property(copy, nonatomic) NSString *cardUrl; // @synthesize cardUrl=_cardUrl;
@property(copy, nonatomic) NSString *cardContent; // @synthesize cardContent=_cardContent;
@property(copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
- (void).cxx_destruct;

@end

