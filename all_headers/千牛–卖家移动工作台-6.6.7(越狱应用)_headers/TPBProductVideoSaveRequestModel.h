//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TPBProductVideoSaveRequestModel : NSObject
{
    NSString *_fileId;
    NSString *_groupId;
    NSString *_title;
    NSString *_tagStr;
    NSString *_templateId;
    NSString *_srcScene;
    NSString *_bizScene;
    NSString *_sellerId;
    NSString *_itemId;
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *srcScene; // @synthesize srcScene=_srcScene;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *tagStr; // @synthesize tagStr=_tagStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (id)init;

@end

