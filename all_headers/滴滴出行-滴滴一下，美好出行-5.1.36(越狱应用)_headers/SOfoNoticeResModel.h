//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOfoResponseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface SOfoNoticeResModel : SOfoResponseModel
{
    NSString<Optional> *_content;
    NSString<Optional> *_action;
    NSNumber<Optional> *_bondStatus;
    NSNumber<Optional> *_oauthStatus;
    NSString<Optional> *_blueBar;
}

@property(copy, nonatomic) NSString<Optional> *blueBar; // @synthesize blueBar=_blueBar;
@property(copy, nonatomic) NSNumber<Optional> *oauthStatus; // @synthesize oauthStatus=_oauthStatus;
@property(copy, nonatomic) NSNumber<Optional> *bondStatus; // @synthesize bondStatus=_bondStatus;
@property(copy, nonatomic) NSString<Optional> *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

