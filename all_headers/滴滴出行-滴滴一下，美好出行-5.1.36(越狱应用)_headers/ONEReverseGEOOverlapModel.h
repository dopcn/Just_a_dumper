//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ONEBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface ONEReverseGEOOverlapModel : ONEBaseModel
{
    NSNumber<Optional> *_is_overlap;
    NSString<Optional> *_title;
}

@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *is_overlap; // @synthesize is_overlap=_is_overlap;
- (void).cxx_destruct;

@end

