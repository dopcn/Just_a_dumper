//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol UGCUploadResult <NSObject>
@property(nonatomic) long long uploadError;
@property(retain, nonatomic) NSString *pictureURL;
@property(retain, nonatomic) NSString *pictureKey;
@property(nonatomic) struct CGSize size;
@property(retain, nonatomic) NSNumber *result;
@end

