//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IMYIContent-Protocol.h"

@class NSDictionary, NSString;
@protocol IMYIAttachment;

@interface IMYContent : NSObject <IMYIContent>
{
    NSString *_text;
    NSString *_title;
    id <IMYIAttachment> _attachment;
    NSString *_url;
    unsigned long long _contentType;
    NSString *_descriptionText;
    NSDictionary *_ext;
}

@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) id <IMYIAttachment> attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

