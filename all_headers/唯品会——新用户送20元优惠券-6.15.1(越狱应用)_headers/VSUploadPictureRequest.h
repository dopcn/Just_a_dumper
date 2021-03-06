//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSData, NSNumber, NSString;

@interface VSUploadPictureRequest : VSEasyAPIRequestParameter
{
    NSNumber *_purpose;
    NSNumber *_version;
    NSString *_token;
    NSData *_imageData;
    NSString *_imageName;
    NSString *_mimeType;
}

@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *purpose; // @synthesize purpose=_purpose;
- (void).cxx_destruct;
- (id)toDictionary;

@end

