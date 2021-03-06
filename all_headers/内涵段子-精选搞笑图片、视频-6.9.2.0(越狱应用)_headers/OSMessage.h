//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, UIImage;

@interface OSMessage : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_link;
    UIImage *_image;
    UIImage *_thumbnail;
    unsigned long long _multimediaType;
    NSString *_extInfo;
    NSString *_mediaDataUrl;
    NSString *_fileExt;
    NSData *_file;
}

@property(retain, nonatomic) NSData *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(retain, nonatomic) NSString *mediaDataUrl; // @synthesize mediaDataUrl=_mediaDataUrl;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property unsigned long long multimediaType; // @synthesize multimediaType=_multimediaType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEmpty:(id)arg1 AndNotEmpty:(id)arg2;

@end

