//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMElem.h"

@class NSArray, NSString;

@interface TIMImageElem : TIMElem
{
    unsigned int taskId;
    NSString *path;
    NSArray *imageList;
    long long level;
    long long format;
    NSString *selfIdentifier;
}

@property(retain, nonatomic) NSString *selfIdentifier; // @synthesize selfIdentifier;
@property(nonatomic) long long format; // @synthesize format;
@property(nonatomic) long long level; // @synthesize level;
@property(nonatomic) unsigned int taskId; // @synthesize taskId;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList;
@property(retain, nonatomic) NSString *path; // @synthesize path;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)getUploadingProgress;
- (id)init;

@end

