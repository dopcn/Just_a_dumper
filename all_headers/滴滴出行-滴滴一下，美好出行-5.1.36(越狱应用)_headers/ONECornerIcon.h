//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface ONECornerIcon : JSONModel
{
    NSNumber<Optional> *_iconType;
    NSString<Optional> *_iconText;
    NSString<Optional> *_menuId;
    NSNumber<Optional> *_startTime;
    NSNumber<Optional> *_endTime;
    NSNumber<Optional> *_id;
}

@property(retain, nonatomic) NSNumber<Optional> *id; // @synthesize id=_id;
@property(retain, nonatomic) NSNumber<Optional> *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber<Optional> *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString<Optional> *menuId; // @synthesize menuId=_menuId;
@property(copy, nonatomic) NSString<Optional> *iconText; // @synthesize iconText=_iconText;
@property(retain, nonatomic) NSNumber<Optional> *iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;

@end

