//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSNumber, NSString;

@interface NTESNBInitiator : NSObject <YYModel>
{
    NSString *_itemid;
    NSString *_expertId;
    NSString *_category;
    NSString *_name;
    NSString *_title;
    NSString *_alias;
    NSString *_classification;
    NSString *_picurl;
    NSString *_headpicurl;
    NSNumber *_createTime;
    NSNumber *_expertState;
    NSNumber *_concernCount;
    NSNumber *_questionCount;
    NSNumber *_order;
    NSNumber *_concerned;
}

+ (id)modelPropertyWhitelist;
@property(retain, nonatomic) NSNumber *concerned; // @synthesize concerned=_concerned;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(retain, nonatomic) NSNumber *questionCount; // @synthesize questionCount=_questionCount;
@property(retain, nonatomic) NSNumber *concernCount; // @synthesize concernCount=_concernCount;
@property(retain, nonatomic) NSNumber *expertState; // @synthesize expertState=_expertState;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *headpicurl; // @synthesize headpicurl=_headpicurl;
@property(retain, nonatomic) NSString *picurl; // @synthesize picurl=_picurl;
@property(retain, nonatomic) NSString *classification; // @synthesize classification=_classification;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *expertId; // @synthesize expertId=_expertId;
@property(retain, nonatomic) NSString *itemid; // @synthesize itemid=_itemid;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

