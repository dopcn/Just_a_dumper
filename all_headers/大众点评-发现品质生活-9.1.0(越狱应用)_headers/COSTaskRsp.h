//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface COSTaskRsp : NSObject
{
    int _retCode;
    NSString *_descMsg;
    NSDictionary *_data;
    NSDictionary *_fileData;
}

@property(retain, nonatomic) NSDictionary *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *descMsg; // @synthesize descMsg=_descMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;

@end

