//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJKeyValue-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface WFFeedNewsMsgTagModel : NSObject <MJKeyValue, NSCoding>
{
    int _tagId;
    NSString *_text;
    NSString *_url;
    NSString *_img;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

