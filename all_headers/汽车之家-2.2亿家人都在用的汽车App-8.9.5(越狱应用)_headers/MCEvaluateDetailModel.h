//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MCEvaluateDetailModel : NSObject
{
    long long _helpfulcount;
    long long _isauth;
    long long _Koubeiid;
    long long _viewcount;
    long long _specid;
    long long _userid;
    NSString *_posttime;
    NSString *_specname;
    NSString *_userimage;
    NSString *_username;
    NSMutableArray *_contentArray;
    NSMutableArray *_carPicArray;
    NSMutableArray *_medalArray;
    long long _commentcount;
    long long _seriesid;
    NSString *_seriesname;
}

@property(retain, nonatomic) NSString *seriesname; // @synthesize seriesname=_seriesname;
@property(nonatomic) long long seriesid; // @synthesize seriesid=_seriesid;
@property(nonatomic) long long commentcount; // @synthesize commentcount=_commentcount;
@property(retain, nonatomic) NSMutableArray *medalArray; // @synthesize medalArray=_medalArray;
@property(retain, nonatomic) NSMutableArray *carPicArray; // @synthesize carPicArray=_carPicArray;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *userimage; // @synthesize userimage=_userimage;
@property(retain, nonatomic) NSString *specname; // @synthesize specname=_specname;
@property(retain, nonatomic) NSString *posttime; // @synthesize posttime=_posttime;
@property(nonatomic) long long userid; // @synthesize userid=_userid;
@property(nonatomic) long long specid; // @synthesize specid=_specid;
@property(nonatomic) long long viewcount; // @synthesize viewcount=_viewcount;
@property(nonatomic) long long Koubeiid; // @synthesize Koubeiid=_Koubeiid;
@property(nonatomic) long long isauth; // @synthesize isauth=_isauth;
@property(nonatomic) long long helpfulcount; // @synthesize helpfulcount=_helpfulcount;
- (void).cxx_destruct;
- (id)init;

@end

