//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TVCUploadResponse : NSObject
{
    int _retCode;
    NSString *_descMsg;
    NSString *_videoId;
    NSString *_videoURL;
    NSString *_coverURL;
}

@property(retain, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *descMsg; // @synthesize descMsg=_descMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;

@end

