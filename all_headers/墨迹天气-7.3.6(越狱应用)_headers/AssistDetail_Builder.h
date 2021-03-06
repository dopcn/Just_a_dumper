//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class AssistDetail;

@interface AssistDetail_Builder : PBGeneratedMessage_Builder
{
    AssistDetail *result;
}

@property(retain) AssistDetail *result; // @synthesize result;
- (id)clearIsShowAdSign;
- (id)setIsShowAdSign:(_Bool)arg1;
- (_Bool)isShowAdSign;
- (_Bool)hasIsShowAdSign;
- (id)clearIndex;
- (id)setIndex:(int)arg1;
- (int)index;
- (_Bool)hasIndex;
- (id)clearAssistCard;
- (id)setAssistCardValues:(id *)arg1 count:(unsigned long long)arg2;
- (id)setAssistCardArray:(id)arg1;
- (id)addAssistCard:(id)arg1;
- (id)assistCardAtIndex:(unsigned long long)arg1;
- (id)assistCard;
- (id)clearVoiceAudition;
- (id)setVoiceAudition:(id)arg1;
- (id)voiceAudition;
- (_Bool)hasVoiceAudition;
- (id)clearVoiceZip;
- (id)setVoiceZip:(id)arg1;
- (id)voiceZip;
- (_Bool)hasVoiceZip;
- (id)clearDefaultImg;
- (id)mergeDefaultImg:(id)arg1;
- (id)setDefaultImgBuilder:(id)arg1;
- (id)setDefaultImg:(id)arg1;
- (id)defaultImg;
- (_Bool)hasDefaultImg;
- (id)clearCardBg;
- (id)mergeCardBg:(id)arg1;
- (id)setCardBgBuilder:(id)arg1;
- (id)setCardBg:(id)arg1;
- (id)cardBg;
- (_Bool)hasCardBg;
- (id)clearIcon;
- (id)mergeIcon:(id)arg1;
- (id)setIconBuilder:(id)arg1;
- (id)setIcon:(id)arg1;
- (id)icon;
- (_Bool)hasIcon;
- (id)clearDesc;
- (id)setDesc:(id)arg1;
- (id)desc;
- (_Bool)hasDesc;
- (id)clearBrief;
- (id)setBrief:(id)arg1;
- (id)brief;
- (_Bool)hasBrief;
- (id)clearName;
- (id)setName:(id)arg1;
- (id)name;
- (_Bool)hasName;
- (id)clearIsNew;
- (id)setIsNew:(int)arg1;
- (int)isNew;
- (_Bool)hasIsNew;
- (id)clearNum;
- (id)setNum:(int)arg1;
- (int)num;
- (_Bool)hasNum;
- (id)clearActNum;
- (id)setActNum:(int)arg1;
- (int)actNum;
- (_Bool)hasActNum;
- (id)clearContentType;
- (id)setContentType:(int)arg1;
- (int)contentType;
- (_Bool)hasContentType;
- (id)clearSex;
- (id)setSex:(int)arg1;
- (int)sex;
- (_Bool)hasSex;
- (id)clearType;
- (id)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

