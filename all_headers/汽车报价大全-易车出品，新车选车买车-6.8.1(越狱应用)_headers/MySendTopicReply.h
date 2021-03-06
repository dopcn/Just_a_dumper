//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HSTopicReply.h"

@class HSMixtureText, NSString;

__attribute__((visibility("hidden")))
@interface MySendTopicReply : HSTopicReply
{
    _Bool _TopicIsDeleted;
    NSString *_QuoteTitle;
    NSString *_QuoteUserId;
    NSString *_QuoteId;
    HSMixtureText *_contentMixText;
    HSMixtureText *_referenceMixText;
}

@property(retain, nonatomic) HSMixtureText *referenceMixText; // @synthesize referenceMixText=_referenceMixText;
@property(retain, nonatomic) HSMixtureText *contentMixText; // @synthesize contentMixText=_contentMixText;
@property(retain, nonatomic) NSString *QuoteId; // @synthesize QuoteId=_QuoteId;
@property(retain, nonatomic) NSString *QuoteUserId; // @synthesize QuoteUserId=_QuoteUserId;
@property(retain, nonatomic) NSString *QuoteTitle; // @synthesize QuoteTitle=_QuoteTitle;
@property(nonatomic) _Bool TopicIsDeleted; // @synthesize TopicIsDeleted=_TopicIsDeleted;
- (void).cxx_destruct;
- (id)referenceContentString;
- (id)commentOrContentTextString;
- (id)initWithDictionay:(id)arg1;

@end

