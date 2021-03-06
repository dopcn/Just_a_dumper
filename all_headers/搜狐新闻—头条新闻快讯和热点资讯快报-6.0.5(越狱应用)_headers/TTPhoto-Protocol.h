//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "TTURLObject-Protocol.h"

@class NSString;
@protocol TTPhotoSource;

@protocol TTPhoto <NSObject, TTURLObject>
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) long long index;
@property(nonatomic) struct CGSize size;
@property(nonatomic) id <TTPhotoSource> photoSource;
- (NSString *)URLForVersion:(int)arg1;
@end

