//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface STADNewsObject : NSObject
{
    NSString *_adid;
    NSString *_itemspaceid;
    NSString *_form;
    NSString *_onform;
    NSString *_weight;
    NSString *_online;
    NSString *_offline;
    NSString *_tag;
    NSString *_impressionid;
    NSString *_clickmonitor;
    NSString *_viewmonitor;
    NSString *_monitorkey;
    NSString *_size;
    NSDictionary *_special;
    NSDictionary *_resources;
    NSMutableArray *_urlAssetArr;
    NSMutableDictionary *_localAssetDict;
}

@property(retain, nonatomic) NSMutableDictionary *localAssetDict; // @synthesize localAssetDict=_localAssetDict;
@property(retain, nonatomic) NSMutableArray *urlAssetArr; // @synthesize urlAssetArr=_urlAssetArr;
@property(retain, nonatomic) NSDictionary *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSDictionary *special; // @synthesize special=_special;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *monitorkey; // @synthesize monitorkey=_monitorkey;
@property(copy, nonatomic) NSString *viewmonitor; // @synthesize viewmonitor=_viewmonitor;
@property(copy, nonatomic) NSString *clickmonitor; // @synthesize clickmonitor=_clickmonitor;
@property(copy, nonatomic) NSString *impressionid; // @synthesize impressionid=_impressionid;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *offline; // @synthesize offline=_offline;
@property(copy, nonatomic) NSString *online; // @synthesize online=_online;
@property(copy, nonatomic) NSString *weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *onform; // @synthesize onform=_onform;
@property(copy, nonatomic) NSString *form; // @synthesize form=_form;
@property(copy, nonatomic) NSString *itemspaceid; // @synthesize itemspaceid=_itemspaceid;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
- (void).cxx_destruct;
- (void)setPropertysByDictionary:(id)arg1;
- (id)init;

@end

